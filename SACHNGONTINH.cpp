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
//P182PROA
void xuly()
{
   ll c,v0,v1,a,l;
   cin>>c>>v0>>v1>>a>>l;
   ll dem=1;
   c-=v0;
   while(1)
   {
      if(c<=0) break;
      dem++;
      v0+=a;
      if(v0>v1) v0=v1;
      c=c+l-v0;
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
