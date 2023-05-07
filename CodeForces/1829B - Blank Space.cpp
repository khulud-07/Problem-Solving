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
        ll mx=0;
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(ll i=0;i<n;i++)
        {
            ll cnt=0;
            for(ll j=i;j<n;j++)
            {
                if(ar[j]==0)
                {
                    cnt++;
                }
                else break;
            }
            mx=max(cnt,mx);
           // cnt=0;
        }
        cout<<mx<<endl;

    }

}
 
