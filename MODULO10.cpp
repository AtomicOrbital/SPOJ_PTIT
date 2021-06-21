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
ll a[N];
ll poww(ll a,ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%MOD;
        a=(a*a)%MOD;
        b/=2;
    }
    return res%MOD;
}
void xuly()
{
  ll n,x,s=0;
  cin>>n>>x;
  f1(i,n) cin>>a[i];
  f1(i,n)
  {
    s=(s%MOD+a[i]%MOD*poww(x,n-i)%MOD)%MOD;
  }
  cout<<s<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
