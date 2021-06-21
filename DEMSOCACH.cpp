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
ll a[N],b[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  for(int i=1;i<=n;i++) {cin>>a[i],b[i]=b[i-1]+a[i];}
  ll tong=0;
  if(b[n]%3==0)
  {
      ll dem=0;
      for(int i=n-1;i>=1;i--)
      {
         if(b[i]==b[n]/3) tong+=dem;
         if(b[i]==b[n]/3*2) dem++;
      }
  }
  cout<<tong;
  return 0;
}
