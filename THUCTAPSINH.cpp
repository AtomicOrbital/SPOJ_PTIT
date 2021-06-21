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
ll lt(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a;
    ll m=lt(a,b/2);
    if(b%2==1) return m*m*a;
    return m*m;
}
void xuly()
{
  ll l,r,x,t=1;
  bool kt=false;
  cin>>l>>r>>x;
  if(l==1) cout<<1<<" ";
  ll ans=log(r)/log(x);
  for(int i=0;i<ans;i++)
  {
      t*=x;
      if(t>=l&&t<=r)
      {
          cout<<t<<" ";
          kt=true;
      }
  }
  if(kt==false) cout<<-1;
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
