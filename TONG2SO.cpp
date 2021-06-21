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
ll a[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,m,dem=0;
  cin>>n>>m;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          if(a[i]+a[j]==m) dem++;
      }
  }
  cout<<dem;
  return 0;
}
