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
const int N=1e7+3;
const int MOD=1e9+7;
ll a[N];
void xuly()
{
  ll n,dem=0;
  cin>>n;
  f1(i,n) {cin>>a[i];if(a[i]==0) dem++;}
  f1(i,n)
  {
      if(a[i]!=0) cout<<a[i]<<" ";
  }
  f1(i,dem) cout<<0<<" ";
  cout<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  for(int i=1;i<=n;i++) xuly();
  return 0;
}
