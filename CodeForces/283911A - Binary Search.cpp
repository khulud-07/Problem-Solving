#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }



       sort(v.begin(),v.end());
       //vector<int>v;
       while(q--)
       {
           ll u;
           cin>>u;
           if(binary_search(v.begin(),v.end(),u))
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }

}
