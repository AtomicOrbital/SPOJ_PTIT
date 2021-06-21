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
  sort(a,a+n);
  ll s=0,i=0,b=n-1;
  while(b>0)
  {
      if(a[i]<=b-1)
      {
          s+=a[i];
          b=b-a[i]-1;
          i++;
      }
      else
      {
          s+=b;
          break;
      }
  }
  cout<<s;
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
