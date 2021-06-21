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
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
bool tn(ll n)
{
    ll m=n,s=0;
    while(n)
    {
        s=s*10+n%10;
        n/=10;
    }
    if(gcd(s,m)==1) return true;
    return false;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll a,b,dem=0;
  cin>>a>>b;
  f(i,a,b)
  {
      if(tn(i)) dem++;
  }
  cout<<dem;
  return 0;
}
