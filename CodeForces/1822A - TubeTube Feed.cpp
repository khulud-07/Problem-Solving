#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t1;
    cin>>t1;
    while(t1--)
    {
        ll n,t;
        cin>>n>>t;
        ll teer=0;
        ll a[n+10],b[n+10];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>t)
            {
                teer++;
            }
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        if(teer!=n)
        {
               ll mx=-100;
               ll in=-1;
                    ll x=0;
               for(ll i=0;i<n;i++)
               {

                   if((a[i]+x)<=t)
                   {
                      if(b[i]>mx)
                      {
                          mx=b[i];
                          in=i+1;
                      }

                   }
                 //  cout<<x<<endl;
                   x++;

               }
               cout<<in<<endl;
        }
        else cout<<-1<<endl;

    }
}
