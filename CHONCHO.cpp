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
ll f[N]={0};
int main()
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      f[a[i]]=1;
  }
  for(int i=1;i<=n;i++)
  {
      if(f[i]==0)
      {
          cout<<i;
          return 0;
      }
  }
  cout<<n+1;
}
