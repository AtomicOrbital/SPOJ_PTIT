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
ll a[N],b[N];
int main()
{
  ll n,dem=0,pos=-1;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=2;i<=n;i++)
  {
      if(a[i]<a[i-1])
      {
          dem++;
          pos=i;
      }
  }
  if(dem>1) cout<<-1;
  else if(dem==0) cout<<0;
  else if(dem==1)
  {
     if(a[1]>=a[n])
     {
         cout<<n-pos+1;
     }
     else cout<<-1;
  }
  return 0;
}
