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
//P185SUMJ
ll d[N];
void xuly()
{
   ll n,a,b,dem1=0,dem2=0,ans=0;
   cin>>n>>a>>b;
   f1(i,n)
   {
       cin>>d[i];
       if(d[i]==1) dem1++;
       else dem2+=2;
   }
   ll s1=a,s2=2*b;
   if(dem2-s2>=0) {ans+=dem2-s2;s2=0;}
   else s2=s2-dem2;
   if(dem1-s1>=0)
   {
       ll h=dem1-s1;
       if(h>=s2) ans+=h-s2;
   }
   cout<<ans;
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
