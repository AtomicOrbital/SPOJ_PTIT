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
vector<ll>f;
void xuly()
{
  ll n;
  cin>>n;
  f1(i,n) cin>>a[i];
  sort(a+1,a+n+1);
  ll dem=1;
  f.push_back(a[1]);
  for(int i=2;i<=n;i++)
  {
    if(a[i]!=a[i-1])
    {
        dem++;
        f.push_back(a[i]);
    }
    if(dem==4)
    {
        cout<<"NO";
        return;
    }
  }
  if(dem<3)
  {
      cout<<"YES";
      return ;
  }
  else
  {
      sort(f.begin(),f.end());
      if(f[2]-f[1]==f[1]-f[0])
      {
          cout<<"YES";
          return;
      }
      else
      {
          cout<<"NO";
          return;
      }
  }
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
