#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,q;
    cin>>n>>q;
    ll ar[n+10];
    ll pre[n+10];
    pre[0]=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>ar[i];
        pre[i]=pre[i-1];
        if(i>2)
        {
            if(ar[i-2]>=ar[i-1] && ar[i-1]>=ar[i])
            {
                pre[i]++;
            }
        }
    }
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        ll len=r-l+1;
        if(len<=2) cout<<len<<endl;
        else
        {
            ll err = pre[r]-pre[l-1];

            for(ll i=l;i<=l+1;i++)
            {
                if(i>2)
                {
                    if(ar[i-2]>=ar[i-1] && ar[i-1]>=ar[i])
                    {
                        err--;
                    }
                }
            }
            cout<<len-err<<endl;
        }
    }
}
