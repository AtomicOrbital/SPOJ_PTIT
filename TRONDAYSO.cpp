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
ll f[1005][1005];
void xuly()
{
  ll n,m;
  cin>>n>>m;
  f1(i,n) f[i][0]=1;
  f1(i,m) f[0][i]=1;
  f[0][0]=1;
  f1(i,n)
  {
      f1(j,m)
      {
          f[i][j]=(f[i-1][j]+f[i][j-1])%MOD;
      }
  }
  cout<<f[n][m]<<endl;
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
