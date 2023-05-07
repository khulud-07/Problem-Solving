#include<bits/stdc++.h>
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
        vector<ll>v,v1,v2;
        while(n--){
            ll x;
        cin>>x;

        string s;
        getchar();
        cin>>s;
        char a=s[0];
        char b=s[1];
       // cout<<a<<" "<<b<<endl;
       ll cnt=0;

       if(a=='1' && b=='1'){
           v.push_back(x);
        }
        else if(a=='1' && b=='0')
        {
            v1.push_back(x);
        }
        else if(a=='0' && b=='1')
        {
            v2.push_back(x);
        }
        else
        {
            cnt==0;
        }


    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1.size()==0 || v2.size()==0 )
    {
        if(v.size()>0) cout<<v[0]<<endl;
        else cout<<-1<<endl;
    }
    else
    {
        if(v.size()>0)
        {
            ll mx1=min(v[0],(v1[0]+v2[0]));
            cout<<mx1<<endl;
        }
        else
        {
            cout<<(v1[0]+v2[0])<<endl;
        }
    }
}
}
 
