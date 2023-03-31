#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll infLL = 9000000000000000000;
#define MOD 1000000007


const int mx = 1e5+123;
ll dist[mx];
vector<pair<int,int>> adj[mx];
int par[mx];

void dijkstra ( int s, int n )
{
    for ( int i = 1; i <= n; i++ )
        dist[i] = infLL;
    priority_queue< pair<ll,ll>, vector<pair<ll,ll> >,greater<pair<ll,ll > > >pq;

    dist[s] = 0;
    pq.push ( { 0, s } );

    while ( !pq.empty() )
    {
        int u = pq.top().second;
        ll curD = pq.top().first;
        pq.pop();

        if ( dist[u] < curD )
            continue;

        for ( auto v : adj[u] )
        {
            if ( curD + v.second < dist[v.first] )
            {
                dist[v.first] = curD + v.second;
                par[v.first] = u;
                pq.push( { dist[v.first], v.first } );
            }
        }
    }
}

int main()
{


    int n, m;
    cin >> n >> m;
    for ( int i = 1; i <= m; i++ )
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back ( {v, w} );
        adj[v].push_back ( { u, w } );
    }

    dijkstra(1, n);

    if ( dist[n] == infLL )
        return cout << "-1\n", 0;

    int u = n;
    vector<int> path = {n};
    while ( par[u] != 0 )
    {
        path.push_back ( par[u] );
        u = par[u];
    }

    reverse (path.begin(),path.end());

    for ( auto u : path )
        cout << u << " ";
    cout << endl;



    return 0;
}
