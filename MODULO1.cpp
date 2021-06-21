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
ll poww(ll a,ll b,ll p)
{
    ll res=1;
    while(b)
    {
        if(b%2==1) res=(res*a)%p;
        a=(a*a)%p;
        b/=2;
    }
    return res%p;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
      ll a,b,p;
      cin>>a>>b>>p;
      cout<<poww(a,b,p)<<endl;
  }
  return 0;
}
