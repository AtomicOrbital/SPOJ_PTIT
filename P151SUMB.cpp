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
int main()
{
  ll n;
  cin>>n;
  ll maxn=6000;
  for(int i=0;i<=n/3;i++)
  {
      ll x=i*3;
      ll y=n-x;
      if(y%5==0)
      {
          ll ans=i+y/5;
          if(ans<maxn) maxn=ans;
      }
  }
  if(maxn==6000) cout<<-1;
  else cout<<maxn;
  return 0;
}