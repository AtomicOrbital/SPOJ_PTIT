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
  ll n,k;
  cin>>n>>k;
  ll a[n+5],f[100]={0};
  f1(i,k) {cin>>a[i];f[a[i]]=1;}
  ll i=k,dem=0;
  while(i>0&&a[i]==n-k+i) i--;
  if(i<=0) cout<<k<<endl;
  else
  {
      a[i]++;
      for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
      for(int j=1;j<=k;j++) f[a[j]]=0;
      f1(j,40) if(f[j]) dem++;
      cout<<dem<<endl;
  }
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
