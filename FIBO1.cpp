#include<bits/stdc++.h>
#include<string>
#include<vector>
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
  ll n;
  cin>>n;
  f[0]=0;f[1]=1;
  for(int i=2;i<=1000;i++)
  {
      f[i]=(f[i-1]%MOD+f[i-2]%MOD)%MOD;
  }
  cout<<f[n]<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  while(n--) xuly();
  return 0;
}
