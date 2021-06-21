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
ll a[N],f[N];
int main()
{
  ll n,maxn=0;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++)
  {
    ll dem=0,l=i;
    while(a[l]<=a[l+1]&&l<=n)
    {
        dem++;
        l++;
    }
    if(dem>maxn) maxn=dem;
  }
  cout<<maxn+1;
  return 0;
}
