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
        if(n==1)
            cout<<1<<endl;
        else
        {
            if(n%2!=0)
                cout<<-1<<endl;
            else
            {
                for(int i=2; i<=n; i+=2)
                {
                    cout<<i<<" "<<i-1<<" ";
                }
                cout<<endl;
            }
        }
    }
}
