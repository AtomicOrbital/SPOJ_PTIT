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
ll a[N],f[N]={0};
void xuly()
{
  ll n;
  cin>>n;
  f1(i,n) {cin>>a[i];f[a[i]]++;}
  ll dem=0;
  f1(i,n)
  {
      if(f[a[i]]>=2) {dem+=f[a[i]]/2;f[a[i]]=-1e9;}
  }
  if(dem%2==0) cout<<dem/2<<endl;
  else cout<<(dem-1)/2<<endl;
  f1(i,n) f[a[i]]=0;
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
