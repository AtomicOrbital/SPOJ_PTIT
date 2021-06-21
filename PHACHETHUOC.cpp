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
ll f[N],a[N],b[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i]>>b[i];
  for(int i=n-1;i>=1;i--)
   {
    for(int j=1;j<=i;j++)
       {
         if(a[j]<a[j-1]||(a[j]==a[j-1]&&b[j]<b[j-1]))
         {
            long long tmp1=a[j],tmp2=b[j];
            a[j]=a[j-1];b[j]=b[j-1];
            a[j-1]=tmp1;b[j-1]=tmp2;
         }
        }
    }
  ll m=0;
  for(int i=0;i<n;i++)
  {
      while(m>0&&b[m-1]<b[i]) m--;
      a[m]=a[i];b[m]=b[i];
      m++;
  }
  for(int i=0;i<m;i++)
  {
      f[i]=a[i]*b[0];
      for(int j=0;j<i;j++)
      {
          if(f[i]>f[j-1]+a[i]*b[j])
          {
              f[i]=f[j-1]+a[i]*b[j];
          }
      }
  }
  cout<<f[m-1];
  return 0;
}
