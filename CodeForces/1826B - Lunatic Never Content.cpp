#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    ll cnt=0;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n+10];

        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        if(n==1){
            
            cout<<0<<endl;
        }
        else
        {
            ll ans=abs(ar[0]-ar[n-1]);
            
            for(ll i=0; i<n/2; i++)
            {
                ans = __gcd(ans,abs(ar[i]-ar[n-i-1]));


            }
            cout<<ans<<endl;



        }
    }
}
 
