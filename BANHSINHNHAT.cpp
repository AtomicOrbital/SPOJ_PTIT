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
void xuly()
{
  ll n,ans=0;
  cin>>n;
  char a[n+5][n+5];
  f1(i,n)
  {
      f1(j,n)
      {
          cin>>a[i][j];
      }
  }
  f1(i,n)
  {
      ll dem=0;
      f1(j,n)
      {
          if(a[i][j]=='C') dem++;
      }
      if(dem>=2) ans+=dem*(dem-1)/2;
  }
  f1(i,n)
  {
      ll dem=0;
      f1(j,n)
      {
          if(a[j][i]=='C') dem++;
      }
      if(dem>=2) ans+=dem*(dem-1)/2;
  }
  cout<<ans;
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
