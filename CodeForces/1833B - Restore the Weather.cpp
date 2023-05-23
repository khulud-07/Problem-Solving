#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ar[n+10];
        ll br[n+10];
        vector<pair<ll , ll > >v,v1;
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
            v.push_back(make_pair(ar[i],i));
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            cin>>br[i];
        }
        sort(br,br+n);
        for(ll i=0;i<n;i++)
        {
            v1.push_back(make_pair(v[i].second,br[i]));
        }
        sort(v1.begin(),v1.end());

        for(ll i=0;i<n;i++)
        {
            cout<<v1[i].second<<" ";
        }
        cout<<endl;



    }
}
