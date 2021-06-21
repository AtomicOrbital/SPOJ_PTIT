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
struct lsu
{
    ll dau,cuoi;
};
lsu a[N];
bool ss(lsu a,lsu b)
{
    if(a.dau==b.dau) return a.cuoi<b.cuoi;
    return a.dau<b.dau;
}
void xuly()
{
  ll n,dem=0;
  cin>>n;
  f1(i,n) cin>>a[i].dau>>a[i].cuoi;
  sort(a+1,a+n+1,ss);
  ll pos=1;
  //f1(i,n) cout<<a[i].dau<<" "<<a[i].cuoi<<endl;
  for(int i=1;i<=n;i++)
  {
    if(i==1||a[i].cuoi>a[pos].cuoi) pos=i;
    if(a[i].dau>a[pos].dau&&a[i].cuoi<a[pos].cuoi) dem++;
  }
  cout<<dem;
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
