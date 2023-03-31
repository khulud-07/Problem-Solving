#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(s) sort(s.begin(),s.end())
#define mx 1000000
int st[4*mx+10];
void build_tree(int a[], int i, int low, int high)
{
    if(low==high)
    {
        st[i]=a[low];
    }
    else
    {
        int mid=(low+high)/2;
        build_tree(a, 2*i, low, mid);
        build_tree(a, 2*i+1, mid+1, high);

        st[i]= min(st[2*i],st[2*i+1]);
    }
}
int query(int i, int low, int high, int left, int right)
{
    if(left>high || right<low)
    {
        return INT_MAX;
    }
    if(low>=left && high<=right)
    {
        return st[i];
    }
    int mid=(low+high)/2;
    int l=query(2*i, low, mid, left, right);
    int r=query(2*i+1, mid+1, high, left, right);

    return min(l,r);
}
int main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        int arr[n+10];
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        //cout<<"xx"<<endl;
        build_tree(arr, 1, 1,n);
        printf("Case %d:\n",c++);
        while(q--)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            int ans= query(1,1,n,l,r);
            printf("%d\n",ans);
        }
    }
}

// Finding minimum
