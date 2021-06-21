#include<bits/stdc++.h>
#include<string>
#include<vector>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll ckn(ll n,ll k)
{
    ll res=1;
    for(int i=1;i<=k;i++,n--) res=res*n/i;
    return res;
}
int main()
{
  ll n;
  while(cin>>n)
  {
     if(n==0) break;
     cout<<ckn(2*n,n)/(n+1)<<endl;
  }
}
