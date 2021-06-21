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
ll a[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  f1(i,n) cin>>a[i];
  sort(a+1,a+n+1);
  if(n%2==1) cout<<a[n/2+1];
  else
  {
      ll x1=a[n/2],x2=a[n/2+1];
      ll s1=0,s2=0;
      f1(i,n)
      {
          s1+=(x1-a[i]);
          s2+=(x2-a[i]);
      }
      if(s1>s2) cout<<x2;
      else cout<<x1;
  }
  return 0;
}
