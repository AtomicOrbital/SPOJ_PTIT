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
ll a[4],n,res=-1,dem=0;
void dequy(ll n)
{
  if(n==0) res=max(res,dem);
  for(int i=1;i<=3;i++)
  {
    if(n>=a[i])
    {
        if((dem+(n-a[i])/a[1])<=res) return;
        dem++;
        dequy(n-a[i]);
        dem--;
    }
  }
}
void xuly()
{
  cin>>n>>a[1]>>a[2]>>a[3];
  sort(a+1,a+4);
  dequy(n);
  cout<<res;
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
