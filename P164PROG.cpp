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
ll tong(ll n)
{
    ll s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
  ll n;
  cin>>n;
  if(n==1) {cout<<1;return 0;}
  ll s=0,dem=0;
  for(int i=1;i<=n;i++)
  {
      if(s>n) break;
      else
      {
          s+=tong(i);
          dem++;
      }
  }
  cout<<dem-1;
}
