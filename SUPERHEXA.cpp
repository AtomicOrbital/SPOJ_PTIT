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
const int MOD=998244353;
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return(a+b);
    return gcd(b,a%b);
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
      ll goc;
      cin>>goc;
      ll n=180/gcd(goc,180);
      ll c=goc/gcd(goc,180);
      if(n-c>=2)
      {
          if(n>=3&&n<=MOD) cout<<n;
          else cout<<-1;
      }
      else
      {
          if(2*n>=3&&2*n<=MOD) cout<<2*n;
          else cout<<-1;
      }
      cout<<endl;
  }
  return 0;
}
