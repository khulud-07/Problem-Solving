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
        ll ans=1,teer=0;
        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(ll i=0; i<n; i++)
        {
            if(i==0)
            {
                if(ar[0]!=1)
                {
                    teer=1;
                    break;
                }
            }
            else
            {
                if(ans>=ar[i])
                {
                    ans+=ar[i];
                }
                else
                {
                    teer=1;
                    break;
                }
            }
        }
        
        if(teer==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
