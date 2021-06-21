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
ll souoc(ll n)
{
  ll s=0;
  for(int i=1;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          s+=i;
          s+=n/i;
      }
  }
  ll x=sqrt(n);
  if(x*x==n) s-=x;
  return s;
}
void xuly()
{
  ll n;
  cin>>n;
  ll m=n;
  ll s=souoc(n);
  ll ans=souoc(s);
  if(ans==2*m) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
