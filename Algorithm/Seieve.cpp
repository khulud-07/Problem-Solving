#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <int> primes;
bool is_prime[9000];
void sieve()
{
    int maxN=3000;
    is_prime[0]=is_prime[1]=true;
    for(int i=2; i*i<=maxN; i++)
    {
        if(!is_prime[i])
        {
            for(int j=i*i; j<=maxN; j+=i)
                is_prime[j]=true;
        }
    }

    for(int i=2; i<=maxN; i++)
        if(!is_prime[i])
            primes.push_back(i);
}


int main()
{
    sieve();
    ll n;
    cin>>n;

    ll sol=0;
    for(ll i=1; i<=n; i++)
    {
        ll cnt=0;
        for(ll j=0; primes[j]<=i; j++)
        {
            if(i%primes[j]==0)
            {
                cnt++;
            }
        }

        if(cnt==2)
        {
            sol++;
        }
        cnt=0;
    }
    cout<<sol<<endl;
}


