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
void xuly()
{
  ll n;
  cin>>n;
  ll dem4=0,dem7=0;
  bool kt=true;
  while(1)
  {
      if(n%7==0)
      {
          dem7+=n/7;
          break;
      }
      if(n>=4)
      {
          dem4++;
          n-=4;
      }
      if(n<4)
      {
          if(n!=0) kt=false;
          break;
      }
  }
  if(kt==true)
  {
      for(int i=1;i<=dem4;i++) cout<<4;
      for(int i=1;i<=dem7;i++) cout<<7;
  }
  else cout<<-1;
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
