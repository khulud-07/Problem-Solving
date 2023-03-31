#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e5

vector<pair<int,int>>adj[1001];
int main()
{
    ll n,m,a,b,w;
    cin>>n>>m;
    while(m--)
    {
       cin>>a>>b>>w;
       adj[a].push_back({b,w});
       adj[b].push_back({a,w});
    }

    priority_queue< pair<ll,ll> , vector<pair<ll,ll> > ,greater<pair<ll,ll > > >pq;
    vector<ll>dist(n+1,INF);
    pq.push({0,1}); //source
    dist[1] = 0;
    while(!pq.empty())
    {
        ll curr= pq.top().second;
        ll curr_d = pq.top().first;
        pq.pop();

        for(pair<ll,ll>edge: adj[curr])
        {
            if(curr_d + edge.second< dist[edge.first])
            {
                dist[edge.first] = curr_d + edge.second;
                pq.push({dist[edge.first] ,edge.first});
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;

}
