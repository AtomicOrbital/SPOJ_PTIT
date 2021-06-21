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
//P201PROF
ll lt(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a;
    ll m=lt(a,b/2);
    if(b%2==1) return m*m*a;
    return m*m;
}
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
ll bcnn(ll a,ll b)
{
    ll uc=gcd(a,b);
    return (a*b)/uc;
}
void xuly()
{
   ll n,k;
   cin>>n>>k;
   ll res=1e18;
   for(int i=0;i<=8;i++)
   {
       res=min(res,bcnn(n,lt(10,k)));
   }
   cout<<res;
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
