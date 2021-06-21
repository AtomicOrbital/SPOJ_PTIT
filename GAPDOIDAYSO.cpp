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
ll lt(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a;
    ll m=lt(a,b/2);
    if(b%2==0) return m*m;
    else return m*m*a;
}
void xuly()
{
   ll n,k,dem=0;
   cin>>n>>k;
   if(k%2==1) cout<<1<<endl;
   else
   {
      for(int i=2;i<=n;i++)
      {
          ll x=lt(2,i);
          if(k%x==(x/2))
          {
              cout<<i<<endl;
              return ;
          }
      }
   }
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
