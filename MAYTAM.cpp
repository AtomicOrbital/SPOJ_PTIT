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
ll a[100];
int main()
{
  ll n,s;
  cin>>n>>s;
  for(int i=1;i<=n;i++) cin>>a[i];
  sort(a+1,a+n+1);
  ll dem=0;
  for(int i=n;i>=1;i--)
  {
      dem+=s/a[i];
      s%=a[i];
  }
  if(dem==0) cout<<-1;
  else cout<<dem;
}
