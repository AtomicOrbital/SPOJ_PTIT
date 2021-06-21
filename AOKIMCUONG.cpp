#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll tong(ll x,ll n,ll m)
{
  ll s=0;
  for(int i=1;i<=n;i++)
  {
      ll j=x/i;
      if(x%i==0) j--;
      s+=min(j,m);
  }
  return s;
}
ll bina(ll n,ll m,ll k,ll l,ll r,ll x)
{
    ll res=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(tong(mid,n,m)<k)
        {
            res=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return res;
}
void xuly()
{
  ll n,m,k;
  cin>>n>>m>>k;
  ll l=1,r=n*m;
  cout<<bina(n,m,k,l,r,k);
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}
