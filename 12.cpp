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

        ll ar[n+20];
        ll sum = 0,tot=0; ;
        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];

        }
        ll teer=0;
        ll x= sum/n;


        for(ll i=0; i<n; i++)
        {
            if(ar[i]==x)
                continue;
            else if(ar[i]>x)
            {
                tot+=(ar[i]-x);
            }
            else
            {
                if(tot<(x-ar[i]))
                {
                    teer=1;
                    break;
                }
                else
                {
                    tot-=(x-ar[i]);
                }
            }
        }
        if(n==1) teer=0;
        if(teer==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}

