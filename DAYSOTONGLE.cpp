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
//P204PROD
void xuly()
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  ll d0=0,d1=0;
  f0(i,n)
  {
      cin>>a[i];
      if(a[i]%2==0) d0++;
  }
  d1=n-d0;
  if(d1==0||(d0==0&&d1%2==0)) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
