#include<bits/stdc++.h>
#include<string>
#include<vector>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef unsigned long long ll;
const int N=1e6+3;
const ll MOD=1e9+7;
ll powerLL(ll x,ll n)
{
    ll result=1;
    while(n)
    {
        if (n&1) result=(result*x)%MOD;
        n=n/2;
        x=x*x%MOD;
    }
    return result;
}
ll powerStrings(string sa,string sb)
{
    ll a=0,b=0;
    for (int i=0;i<sa.length();i++) a=(a*10+(sa[i]-'0'))%MOD;
    for (int i=0;i<sb.length(); i++) b=(b*10+(sb[i]-'0'))%(MOD-1);
    return powerLL(a,b);
}
void xuly()
{
  string a,b;
  cin>>a>>b;
  ll k;
  cin>>k;
  cout<<powerStrings(a,b)%k<<endl;
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
