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
//P186PROB
ll a[N],x[N],y[N];
void xuly()
{
   ll n;
   cin>>n;
   f1(i,n) cin>>a[i];
   ll m;
   cin>>m;
   f1(i,m) cin>>x[i]>>y[i];
   f1(i,m)
   {
     a[x[i]+1]+=a[x[i]]-y[i];
     a[x[i]-1]+=y[i]-1;
     a[x[i]]=0;
   }
   f1(i,n) cout<<a[i]<<endl;
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