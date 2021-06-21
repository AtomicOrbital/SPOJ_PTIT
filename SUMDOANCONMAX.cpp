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
ll a[N],smin[N],s[N]={0},f[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,ans=-1e9;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  smin[1]=0;
  for(int i=2;i<=n;i++) s[i]+=s[i-1]+a[i];
  //for(int i=2;i<=n;i++) smin[i]=min(s[i-1],smin[i-1]);
  for(int i=1;i<=n;i++)
  {
      //f[i]=s[i]-smin[i];
      if(abs(s[i])>ans) ans=abs(s[i]);
  }
  cout<<ans;
  return 0;
}
