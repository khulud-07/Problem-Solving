#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        string s1="codeforces";
        ll cnt=0;
        cin>>s;
        for(ll i=0;i<10;i++)
        {
            if(s[i]!=s1[i]) cnt++;
        }
        cout<<cnt<<endl;

    }

}
 
