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
const int N=1e6+7;
const int MOD=1e9+7;
ll lt(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a;
    ll m=lt(a,b/2);
    if(b%2==0) return m*m;
    else return m*m*a;
}
ll a[N],b[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,s=0;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          s+=lt(a[i]-a[j],2)+lt(b[i]-b[j],2);
      }
  }
  cout<<s;
  return 0;
}
