#include <bits/stdc++.h>
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
        ll sum=0;

        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        sort(ar,ar+n);

        ll cnt=1;

        for(ll i=0; i<n; i++)
        {
            sum -= min(ar[i],cnt);
            if(ar[i]>=cnt)
            {
                cnt++;
            }

        }
        cout<<sum<<endl;
    }
}
