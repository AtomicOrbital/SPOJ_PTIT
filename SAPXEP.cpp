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
ll a[N];
int main()
{
  ll n,m;
  cin>>n>>m;
  ll dem1=0,dem0=0;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i];
    if(a[i]==1) dem1++;
    else dem0++;
  }
  for(int i=1;i<=m;i++)
  {
      ll ans=0;
      ll c,b;
      cin>>b>>c;
      if((c-b+1)%2==0)
      {
          if(dem0>=(c-b+1)/2&&dem1>=(c-b+1)/2) cout<<1<<endl;
          else cout<<0<<endl;
      }
      else cout<<0<<endl;
  }
}
