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
ll a[N],f[N]={0};
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,m,k,dem=0,kt=0;
  cin>>n>>m>>k;
  f1(i,m) cin>>a[i];
  sort(a+1,a+n+1);
  ll b=n;
  ll maxn=*std::max_element(a+1,a+m+1);
  for(int i=1;i<=maxn+k;i++) f[i]++;
  while(1)
  {
     ll h=0;
     for(int i=1;i<=b;i++)
     {
         if(f[i]>0) h++;
     }
     if(h>=b) kt=1;
     else h=0;
     if(kt==1) break;
     dem++;
     n-=k;
     for(int i=n-k;i<=n+k;i++) f[i]++;
     n-=k;
  }
  cout<<dem;
  return 0;
}
