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
ll f[50]={0},a[N];
int main()
{
  ll n=10,dem=0;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++)
  {
      if(f[a[i]%42]==0) dem++;
      f[a[i]%42]++;
  }
  cout<<dem;
}
