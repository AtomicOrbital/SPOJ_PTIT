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
ll a[N],b[N],dem=0;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,k;
  cin>>n>>k;
  for(int i=2;i<=n;i++) a[i]=i;
  for(int i=2;i<=n;i++)
  {
      if(a[i]!=0)
      {
          b[++dem]=a[i];
      }
      for(int j=i*i;j<=n;j++)
      {
          if(a[j]!=0)
          {
              b[++dem]=a[j];
              a[j]=0;
          }
          j=j+i-1;
      }
  }
  cout<<b[k];
  return 0;
}
