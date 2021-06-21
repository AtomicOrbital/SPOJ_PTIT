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
ll a[N],f[N]={0},dp[N];
void xuly()
{
  ll n,m;
  cin>>n>>m;
  f1(i,n) cin>>a[i];
  dp[1]=1;
  f[a[1]]++;
  for(int i=2;i<=n;i++)
  {
    if(f[a[i]]==0) {dp[i]=dp[i-1]+1;f[a[i]]++;}
    else dp[i]=dp[i-1];
  }
  ll pos;
  for(int i=n;i>=1;i--)
  {
      if(dp[i]==m)
      {
          pos=i;
          break;
      }
  }
  cout<<pos;
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
