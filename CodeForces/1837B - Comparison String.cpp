#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll c=0;
       ll n;
       cin>>n;
       string s;
       cin>>s;
       ll cst=0;
       for(ll i=0;i<n-1;i++)
       {
           if(s[i]==s[i+1])
           {
               c++;
           }
           else
           {
               cst=max(cst,c);
                c=0;
           }

       }
       
       c++;
       cst++;
       cout<<max(c,cst)+1<<endl;


    }


}
