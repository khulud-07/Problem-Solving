#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5;
ll a[N],tree[N*4];

void build(ll node,ll st,ll en)
{
    if(st==en)
    {
        tree[node]=a[st];
        return;
    }
    ll mid = (st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    tree[node]= tree[2*node]+tree[2*node +1];


}
int main()
{
    ll n;
    cin>>n;
    ll ar[n+10];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    build(1,0,n-1);
    for(ll i=1;i<15;i++)
    {
        cout<<tree[i]<<endl;
    }

}

