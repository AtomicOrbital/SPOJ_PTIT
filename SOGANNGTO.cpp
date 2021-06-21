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
bool ngto(ll n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
bool uoc(ll n)
{
    ll dem=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0&&ngto(i)) dem++;
    }
    if(dem==2) return true;
    return false;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,dem=0;
  cin>>n;
  for(int i=2;i<=n;i++)
  {
      if(uoc(i)) dem++;
  }
  cout<<dem;
  return 0;
}
