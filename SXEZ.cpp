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
ll a[N],b[N]={0};
void xuly()
{
  ll n,dem=0;
  cin>>n;
  f1(i,n) cin>>a[i];
  sort(a+1,a+n+1);
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
         if(a[j]>a[i]&&b[j]==0)
         {
             b[j]=1;
             dem++;
             break;
         }
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
