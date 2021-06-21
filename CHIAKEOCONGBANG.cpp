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
void xuly()
{
  ll n,dem1=0,dem2=0;
  cin>>n;
  ll a[200];
  for(int i=1;i<=n;i++)
  {
      cin>>a[i];
      if(a[i]==1) dem1++;
      else dem2++;
  }
  if(dem1%2==0&&dem2%2==0) cout<<"YES"<<endl;
  if(dem1%2==1&&dem2%2==0) cout<<"NO"<<endl;
  if(dem1%2==1&&dem2%2==1) cout<<"NO"<<endl;
  if(dem1%2==0&&dem2%2==1&&dem1!=0) cout<<"YES"<<endl;
  if(dem1==0&&dem2%2==1) cout<<"NO"<<endl;
}
int main()
{
  //ios::sync_with_stdio(false);
  //cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
