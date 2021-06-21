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
  ll n,dem=0;
  cin>>n;
  for(int i=0;i<=n;i++) cin>>a[i];
  for(int i=n;i>1;i--)
  {
      if((a[i]+dem)%i!=0||(a[i]+dem)<i)
      {
          cout<<"No";
          return 0;
      }
      if((a[i]+dem)!=0) dem=+(a[i]+dem)/i;
  }
  cout<<"Yes";
}
