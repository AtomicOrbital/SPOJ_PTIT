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
ll f[N],a[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,m;
  cin>>n>>m;
  f1(i,n) {cin>>a[i];f[a[i]]=0;}
  f1(i,m)
  {
      ll x;
      cin>>x;
      f[x]=1;
  }
  f1(i,n)
  {
      if(f[a[i]]==1) sp(a[i]);
  }
  return 0;
}
