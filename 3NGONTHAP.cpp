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
const int N=1e7+7;
const int MOD=1e5+5;
// P183PROH
ll a[MOD],b[MOD],c[MOD],d[N]={0};
void xuly()
{
  ll n,m,k;
  cin>>n>>m>>k;
  f0(i,n) cin>>a[i];
  f0(i,m) cin>>b[i];
  f0(i,k) cin>>c[i];
  for(int i=n-2;i>=0;i--)
  {
      a[i]+=a[i+1];
      d[a[i]]++;
  }
  for(int i=m-2;i>=0;i--)
  {
      b[i]+=b[i+1];
      d[b[i]]++;
  }
  for(int i=k-2;i>=0;i--)
  {
      c[i]+=c[i+1];
      d[c[i]]++;
  }
  ll pos=max(a[0],max(b[0],c[0]))+1;
  while(pos--)
  {
      if(d[pos]==3)
      {
          cout<<pos;
          return;
      }
  }
  cout<<0;
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
