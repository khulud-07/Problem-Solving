#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,m;
    cin>>n>>m;
    ll teer=0;
    if(n==m) cout<<"YES"<<endl;
    else
    {
       queue<ll>q;
       q.push(n);
       while(!q.empty())
       {
           ll a=q.front();
           if(a==m)
           {
               teer=1;
               break;
           }
           q.pop();
           if(a%3==0)
           {
              ll b=a/3;
               q.push(b);
               q.push(b*2);
           }

       }
       if(teer==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

    }
}
