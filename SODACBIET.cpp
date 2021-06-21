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
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
void xuly()
{
  ll n,uc,m=0;
  cin>>n;
  f1(i,n) cin>>a[i];
  sort(a+1,a+n+1);
  if(n==2) uc=a[2]-a[1];
  else uc=gcd(a[2]-a[1],a[3]-a[2]);
  for(int i=3;i<=n;i++)
  {
      uc=gcd(a[i]-a[i-1],uc);
  }
  for(int i=1;i<=sqrt(uc);i++)
  {
      if(uc%i==0)
      {
        a[++m]=i;
        if(i!=(uc/i)) a[++m]=uc/i;
      }
  }
  sort(a+1,a+m+1);
  for(int i=2;i<=m;i++) sp(a[i]);
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
