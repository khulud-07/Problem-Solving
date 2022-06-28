#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll ar[n+10],br[n+10],i,mark=0;
    pair<ll,ll>p[n+10];
    for(i=0;i<n;i++)
    {
        cin>>ar[i]>>br[i];
        p[i].first=ar[i];
        p[i].second=br[i];
    }
    sort(p,p+n);
    for(i=0;i<n-1;i++)
    {
        if(p[i].second>p[i+1].second)
        {
           mark=1;
           break;
        }

    }
      if(mark==1)
        {
            cout<<"Happy Alex"<<endl;

        }
        else
        {
            cout<<"Poor ALex"<<endl;

        }
}

