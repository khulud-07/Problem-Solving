#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll n,ll ar[])
{
    ll l=0;
    ll r=n-1;
    ll s=0;
    ll d=0;
    ll k=0;
    vector<ll>v;
    while(l<=r)
    {
       if(k%2==0)
       {
           if(ar[l]<ar[r])
           {
               s+=ar[r];
               r--;
           }
           else
           {
               s+=ar[l];
               l++;
           }
       }
       else
       {
           if(ar[l]<ar[r])
           {
               d+=ar[r];
               r--;
           }
           else
           {
               d+=ar[l];
               l++;
           }
       }
       k++;

    }
    cout<<s<<" "<<d<<endl;
}
int main()
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

