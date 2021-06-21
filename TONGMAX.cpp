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
//P196PROJ
ll res=0,n,a[N];
ll check()
{
    ll dema=0,demd=0;
    f0(i,n)
    {
        if(a[i]<0) dema++;
        else demd++;
        if(dema>0&&demd>0) return 0;
    }
    if(dema>0) return -1;
    return 1;
}
void xuly()
{
  cin>>n;
  f0(i,n)
  {
      cin>>a[i];
      res+=abs(a[i]);
  }
  if(check())
  {
      cout<<res;
      return;
  }
  ll tmp=0,s=0;
  f0(i,n)
  {
      tmp+=a[i];
      if(tmp<0) tmp=0;
      else s=max(s,tmp);
  }
  f0(i,n) a[i]*=(-1);
  ll tmp1=0,s1=0;
  f0(i,n)
  {
      tmp1+=a[i];
      if(tmp1<0) tmp1=0;
      else s1=max(s1,tmp1);
  }
  cout<<max(s,s1);
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
