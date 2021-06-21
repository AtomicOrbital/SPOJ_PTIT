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
struct diem
{
    ll i,j,k;
};
diem a[N];
ll f[105][105];
void xuly()
{
  ll n;
  cin>>n;
  memset(f,0,sizeof(f));
  f0(l,n) cin>>a[l].i>>a[l].j>>a[l].k;
  f0(l,n)
  {
      ll b1=0,e1=a[l].k,c1=a[l].i,c2=a[l].j;
      for(int m=b1;m<e1;m++)
      {
          for(int h=c1;h<c2;h++)
          {
              f[m][h]=1;
          }
      }
  }
  ll dem=0;
  f0(i,105)
  {
     f0(j,105)
     {
         if(f[i][j]==1) dem++;
     }
  }
  cout<<dem;
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
