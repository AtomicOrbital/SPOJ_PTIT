#include<bits/stdc++.h>
#include<string>
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
  ll n,x,y,z,dem=0;
  cin>>n>>x>>y>>z;
  a[1]=x%z;
  for(int i=2;i<=n;i++)
  {
      a[i]=(a[i-1]+y)%z;
  }
  sort(a+1,a+n+1);
  for(int i=1;i<=n;i++)
  {
      if(a[i]!=a[i+1]) dem++;
      else if(a[i]==a[i+1]) a[i]
  }
}
