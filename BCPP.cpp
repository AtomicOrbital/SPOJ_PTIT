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
ll tonguoc(ll n)
{
    ll x=sqrt(n),s=0;
    if(x*x==n)
    {
        for(int i=1;i<=x;i++)
        {
          if(n%i==0)
          {
              s+=i;
              s+=n/i;
          }
        }
        s-=x;s-=n;
    }
    else
    {
        for(int i=1;i<=x;i++)
        {
          if(n%i==0)
          {
              s+=i;
              s+=n/i;
          }
        }
        s-=n;
    }
    return s;
}
int main()
{
  ll l,r,dem=0;
  cin>>l>>r;
  for(int i=l;i<=r;i++)
  {
      if(tonguoc(i)>i) dem++;
  }
  cout<<dem;
}
