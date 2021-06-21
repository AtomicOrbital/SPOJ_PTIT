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
   f1(i,n) cin>>a[i];
   if(n==0) {cout<<0<<" "<<0;return;}
   else if(n==1) {cout<<1<<" "<<0;return;}
   ll l=1,r=n,dem1=0,dem2=0;
   while(1)
   {
     if(l==r)
     {
         dem1++;
         break;
     }
     if(l==r-1)
     {
         dem1++;
         dem2++;
         break;
     }
     ll x=min(a[l],a[r]);
     a[l]-=x;
     a[r]-=x;
     if(a[l]==0)
     {
         l++;
         dem1++;
     }
     if(a[r]==0)
     {
         r--;
         dem2++;
     }
   }
   cout<<dem1<<" "<<dem2;
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
