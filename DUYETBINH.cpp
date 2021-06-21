#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
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
void xuly()
{
  ll n;
  cin>>n;
  f0(i,n) cin>>a[i];
  ll dem=0,pos1,pos2;
  ll miz=*std::min_element(a,a+n);
  ll maz=*std::max_element(a,a+n);
  for(int i=n-1;i>=0;i--)
  {
    if(a[i]==maz) pos1=i;
  }
  for(int i=pos1;i>=1;i--)
  {
    swap(a[i],a[i-1]);
    dem++;
  }
  f0(i,n)
  {
      if(a[i]==miz) pos2=i;
  }
  for(int i=pos2;i<=n-2;i--)
  {
      swap(a[i],a[i+1]);
      dem++;
  }
  cout<<dem;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}
