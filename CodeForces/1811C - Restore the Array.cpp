#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mx = 1e6+10;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        ll b[n+10];
        vector<ll>v;
        vector<ll>v1;



        for(ll i=0; i<n-1; i++)
        {
            cin>>b[i];
            v.push_back(b[i]);
        }
        v1.push_back(v[0]);
        for(ll i=0;i<n-2;i++)
        {
            v1.push_back(min(v[i],v[i+1]));
        }
        v1.push_back(v[v.size()-1]);
        for(ll i=0;i<n;i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;

    }
}
 
