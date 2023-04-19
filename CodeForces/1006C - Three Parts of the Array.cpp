#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll n,ll ar[])
{
    ll l=0;
    ll r=n-1;
    ll sum1=0;
    ll sum2=0;
    vector<ll>v;
    ll ans=0;
    while(l<=r)
    {
       if(sum1>sum2)
       {
           sum2+=ar[r];
           r--;
       }
       else
       {
           sum1+=ar[l];
           l++;
       }
        if(sum1==sum2)  ans=sum1;


    }
    cout<<ans<<endl;


}
int main()
{


        ll n;
        cin>>n;
        ll ar[n+10];


        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        solve(n,ar);

}

