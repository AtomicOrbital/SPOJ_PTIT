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
const ll MOD=100000001;
ll pp(ll a,ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%MOD;
        a=(a*a)%MOD;
        b/=2;
    }
    return res%MOD;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  for(int k=1;k<=t;k++)
  {
      ll n;
      cin>>n;
      cout<<"Case "<<k<<": ";
      ll x=(pp(2,2*n-1)+pp(2,n-1))%MOD;
      ll y=(pp(4,n)-x+MOD)%MOD;
      cout<<x<<" "<<y<<endl;;
  }
  return 0;
}
