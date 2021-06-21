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
ll f[1000][1000];
void xuly()
{
  ll n,r;
  cin>>n>>r;
  for(int i=0;i<=n;i++) f[i][0]=1;
  for(int i=1;i<=n;i++) f[i][1]=i;
  for(int i=1;i<=n;i++)
  {
     for(int j=0;j<=n;j++)
     {
        f[i][j]=(f[i-1][j-1]+f[i-1][j])%MOD;
     }
  }
  cout<<f[n][r]%MOD<<endl;
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
