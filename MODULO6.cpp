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
ll xaumod(string a,ll m)
{
  ll res=0,num=0;
  for(int i=0;i<a.length();i++)
  {
      num=res*10+a[i]-'0';
      res=num%m;
  }
  return res;
}
void xuly()
{
  string a;
  cin>>a;
  ll b,m;
  cin>>b>>m;
  ll res=xaumod(a,m);
  res%=m;
  ll ans=1;
  while(b!=0)
  {
       if(b&1) ans=(ans*res)%m;
       b/=2;
       res=(res*res)%m;
 }
 cout<<ans%m<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
