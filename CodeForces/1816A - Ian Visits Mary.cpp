#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
        ll t;
        cin>>t;
        while(t--)
        {
            ll a,b;
            cin>>a>>b;
            if(a==1 && b==1){
            cout<<1<<endl;
            cout<<a<<" "<<b<<endl;
            }
            else
            {
                
                cout<<2<<endl;
                
                cout<<a-1<<" "<<1<<endl;
                cout<<a<<" "<<b<<endl;
            }
        }

}
