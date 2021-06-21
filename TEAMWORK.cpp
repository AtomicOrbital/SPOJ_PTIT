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
   ll n,dem=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     ll dem1=0,dem2=0;
     for(int j=1;j<=3;j++)
     {
         cin>>a[j];
         if(a[j]==1) dem1++;
         else dem2++;
     }
     if(dem1>=2) dem++;
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
