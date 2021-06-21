#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll n,a[N];
void xuly()
{
  ll n;
  cin>>n;
  f0(i,n) cin>>a[i];
  stack<ll>L;
  stack<ll>R;
  ll left[n],right[n];
  L.push(0);
  f0(i,n)
  {
      while(L.size()&&a[L.top()]>=a[i])
      {
          L.pop();
      }
      if(L.empty()) left[i]=0;
      else left[i]=L.top()+1;
      L.push(i);
  }
  R.push(n-1);
  for(int i=n;i>=0;i--)
  {
      while(R.size()&&a[R.top()]>=a[i])
      {
          R.pop();
      }
      if(R.empty()) right[i]=n-1;
      else right[i]=R.top()-1;
      R.push(i);
  }
  ll res=0;
  f0(i,n)
  {
      res=max(res,(1+right[i]-left[i])*a[i]);
  }
  en(res);
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
