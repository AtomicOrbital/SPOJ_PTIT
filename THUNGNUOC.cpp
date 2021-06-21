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
struct nuoc
{
    int x,y,z;
};
ll f[N]={0};
void xuly()
{
  ll n;
  cin>>n;
  vector<nuoc>a(n);
  for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y>>a[i].z;
  for(int i=0;i<n;i++)
  {
      if(a[i].z==1)
      {
          for(int j=a[i].x;j<=a[i].y;j++) f[j]=1;
      }
      else if(a[i].z==2)
      {
          ll kt=1;
          for(int j=a[i].x;j<=a[i].y;j++)
          {
              if(f[j]==0)
              {
                  kt=0;
                  break;
              }
          }
          cout<<kt<<endl;
      }
  }
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
