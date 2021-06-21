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
ll a[N];
void xuly()
{
  ll n,m;
  cin>>n>>m;
  ll maxn=0;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n-2;i++)
  {
      ll s=0;
      for(int j=i+1;j<=n-1;j++)
      {
          for(int k=j+1;k<=n;k++)
          {
              s=a[i]+a[j]+a[k];
              if(s>maxn&&s<=m) maxn=s;
          }
      }
  }
  cout<<maxn<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) xuly();
    return 0;
}
