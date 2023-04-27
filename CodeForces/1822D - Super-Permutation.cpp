#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t1;
    cin>>t1;
    while(t1--)
    {
        ll n;
        cin>>n;
        if(n==1) cout<<1<<endl;
        else
        {
            if(n%2!=0) cout<<-1<<endl;
            else
            {
                ll i=n;
                ll j=1;
                while(i!=0)
                {
                    cout<<i<<" ";
                    cout<<j<<" ";
                    i-=2;
                    j+=2;

                }
                cout<<endl;
            }
        }

    }

}
 
