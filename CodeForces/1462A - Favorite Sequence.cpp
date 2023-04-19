#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll n,ll ar[])
{
    ll i=0;
    ll j=n-1;
    vector<ll>v;
    while(i<j)
    {
        v.push_back(ar[i]);
         v.push_back(ar[j]);
         i++;
         j--;

    }
    if(n%2!=0) v.push_back(ar[i]);
    for(ll i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        ll ar[n+10];
        map<ll,ll>mp;
        vector<ll>v,v1;

        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        solve(n,ar);

    }
}

