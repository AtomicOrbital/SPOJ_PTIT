#include<bits/stdc++.h>
#include<string>
#include<vector>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
const ll inf =LLONG_MAX;
const ll ninf=LLONG_MIN;
const int oo=INT_MAX;
const int noo=INT_MIN;
const int N=1e6+3;
const int MOD=1e9+7;
ll a[N];
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
ll poww(ll a,ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%MOD;
        a=(a*a)%MOD;
        b/=2;
    }
    return res;
}
void xuly()
{
  ll n;
  cin>>n;
  f1(i,n) cin>>a[i];
  ll uc=a[1],res=a[1];
  for(int i=2;i<=n;i++)
  {
      res=(res*a[i])%MOD;
      uc=gcd(uc,a[i]);
  }
  ll ans=poww(res,uc);
  cout<<ans<<endl;
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
