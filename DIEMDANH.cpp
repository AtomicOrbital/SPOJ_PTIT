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
ll f[N];
void xuly()
{
  ll n,k,pos;
  cin>>n>>k;
  string a[n+5];
  f[0]=0;
  f1(i,n)
  {
      cin>>a[i];
      f[i]=f[i-1]+i;
      if(f[i]<=k) pos=i;
  }
  sort(a+1,a+n+1);
  //f1(i,n) cout<<a[i]<<endl;
  if(f[pos]==k) cout<<a[pos];
  else
  {
      k=k-f[pos];
      cout<<a[k];
  }
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
