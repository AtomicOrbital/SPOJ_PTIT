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
void xuly()
{
  ll dem=0,n;
  cin>>n;
  if(n==0) {cout<<1<<endl;return;}
  else
  {
      for(int i=0;i<=sqrt(n);i++)
      {
          ll x=n-i*i;
          ll y=sqrt(x);
          if(y*y==x) dem++;
      }
      cout<<dem/2<<endl;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
