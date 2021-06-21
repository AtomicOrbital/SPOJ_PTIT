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
struct ktra
{
    string s;
    ll pos;
};
bool ss(ktra a,ktra b)
{
    if(a.s<b.s) return true;
    if(a.s==b.s) return a.pos<b.pos;
    return false;
}
void xuly()
{
  ll n;
  cin>>n;
  ktra a[n];
  f0(i,n)
  {
      cin>>a[i].s;
      a[i].pos=i+1;
  }
  sort(a,a+n,ss);
  f0(i,n)
  {
      cout<<a[i].pos<<" ";
  }
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
