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
  ll s,n;
  cin>>s>>n;
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
  for(int i=1;i<=n;i++)
  {
      if(s>a[i]) s+=b[i];
      else
      {
          cout<<"NO";
          return 0;
      }
  }
  cout<<"YES";
  return 0;
}
