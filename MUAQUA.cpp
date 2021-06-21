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
ll a[N],b[N];
int main()
{
  ll n,k;
  cin>>n>>k;
  ll dem=0,s=0;
  for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          if(a[i]>a[j])
          {
              swap(a[i],a[j]);
              swap(b[i],b[j]);
          }
      }
  }
  ll pos;
  for(int i=1;i<=n;i++)
  {
      s+=a[i]+b[i];
      dem++;
      if(s>k)
      {
          pos=i;
          break;
      }
  }
  if(s-a[pos]/2>k)
  {
      cout<<dem-1;
      return 0;
  }
  else
  {
      for(int i=pos+1;i<=n;i++)
      {
          if(s>k) break;
          s+=a[i]+b[i];
          dem++;
      }
      cout<<dem;
  }
}
