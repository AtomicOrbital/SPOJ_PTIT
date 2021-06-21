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
const int MOD=1e9+7;
ll c[N];
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
ll bcnn(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
  ll n,m=0;
  cin>>n;
  for(int i=n-1;i>=1;i--)
  {
      if(gcd(n,i)==1)
      {
         c[++m]=i;
      }
  }
  ll bc=bcnn(n,c[1]);
  ll ans=bcnn(bc,c[2]);
  cout<<ans;
}
