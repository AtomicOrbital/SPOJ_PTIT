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
void xuly()
{
  ll a,b;
  cin>>a>>b;
  if(a==b) {cout<<"infinity";return;}
  if(a<b) {cout<<0;return;}
  a-=b;
  ll dem=0;
  for(int i=1;i<sqrt(a);i++)
  {
      if(a%i==0)
      {
          if(i>b) dem++;
          if((a/i)>b) dem++;
      }
  }
  ll k=sqrt(a);
  if(k*k==a&&k>b) dem++;
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
