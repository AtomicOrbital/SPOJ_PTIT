#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll a[100][100];
int main()
{
  for(int i=0;i<=23;i++)
  {
      for(int j=0;j<=59;j++)
      {
          a[i][j]=0;
      }
  }
  ll n;
  cin>>n;
  ll dem=0;
  for(int i=1;i<=n;i++)
  {
    ll x,y;
    cin>>x>>y;
    a[x][y]++;
    dem=max(dem,a[x][y]);
  }
  cout<<dem;
}
