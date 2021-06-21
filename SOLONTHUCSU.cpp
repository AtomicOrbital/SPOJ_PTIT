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
//P184PROE
ll n,s;
ll cso(ll n)
{
    ll i=0;
    while(n)
    {
        i+=n%10;
        n/=10;
    }
    return i;
}
ll bina(ll l,ll r)
{
    l=0,r=1e18+100;
    while(r-l>1)
    {
        ll mid=(l+r)/2;
        if(mid-cso(mid)>=s) r=mid;
        else l=mid;
    }
    return r;
}
void xuly()
{
  cin>>n>>s;
  ll ans=bina(0,1e18+100);
  if(ans<=n) cout<<n-ans+1;
  else cout<<0;
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
