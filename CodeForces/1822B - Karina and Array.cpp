#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+10];
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        ll x= ar[n-1]*ar[n-2];
        ll y=ar[0]*ar[1];
        ll sol=max(x,y);
        cout<<sol<<endl;
    }
}
