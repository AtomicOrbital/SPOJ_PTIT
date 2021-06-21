#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=123456789;
ll PoW(ll a,ll b)
{
    ll res=1;
    while(b!=0)
    {
        if(b%2==0)
        {
            a=(a*a)%MOD;
            b/=2;
        }
        else
        {
            res=(res*a)%MOD;
            b--;
        }
    }
    return res%MOD;
}
int main()
{
  ll n;
  cin>>n;
  cout<<PoW(2,n-1)%MOD;
}
