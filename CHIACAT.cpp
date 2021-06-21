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
ll a[N];
void xuly()
{
  ll n;
  cin>>n;
  ll pos1,pos2;
  f1(i,n) cin>>a[i];
  ll miz=a[1],maz=a[1];
  f1(i,n)
  {
      miz=min(miz,a[i]);
      maz=max(maz,a[i]);
  }
  f1(i,n)
  {
      if(a[i]==miz) pos1=i;
      if(a[i]==maz) pos2=i;
  }
  if(pos1>pos2) swap(pos1,pos2);
  ll res1=pos1-1,res;
  ll res2=n-pos2;
  if(res2>res1)
  {
    res=n-res1;
  }
  else res=res2-1;
  cout<<res;
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
