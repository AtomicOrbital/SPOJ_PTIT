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
//P181SUMD
ll tohop(ll n,ll k)
{
    ll res=1;
    for(int i=1;i<=k;i++,n--) res=res*n/i;
    return res;
}
void xuly()
{
  ll n,m,t;
  cin>>n>>m>>t;
  ll nu=1,nam=t-1,s=0;
  while(nam>=4)
  {
    s+=tohop(n,nam)*tohop(m,nu);
    nu++;
    nam=t-nu;
  }
  cout<<s;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}
