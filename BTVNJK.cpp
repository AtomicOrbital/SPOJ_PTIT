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
  f1(i,n) cin>>a[i];
  sort(a+1,a+n+1);
  vector<ll>d;
  ll dem=1;
  d.push_back(a[1]);
  for(int i=2;i<=n;i++)
  {
      if(a[i]!=a[i-1])
      {
          dem++;
          d.push_back(a[i]);
      }
      if(dem==4)
      {
          cout<<"NO";
          return;
      }
  }
  if(dem<3) {cout<<"YES";return;}
  sort(d.begin(),d.end());
  if(d[1]-d[0]==d[2]-d[1])
  {
    cout<<"YES";
    return;
  }
  else cout<<"NO";
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
