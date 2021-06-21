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
ll n,m;
bool ngto(ll n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0||n%3==0) return false;
    ll x=sqrt(n);
    if(x*x==n) return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0) return false;
    }
    return true;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>n>>m;
  ll j=0;
  while(1)
  {
      if(j==n) return 0;
      if(ngto(m))
      {
          cout<<m<<" ";
          m++;
          j++;
      }
      else m++;
  }
  return 0;
}
