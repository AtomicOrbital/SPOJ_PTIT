#include<bits/stdc++.h>
#include<string>
#include<vector>
#define endl '\n'
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
ll n,m,k;
ll tinh(ll mid)
{
    ll s=0;
    f1(i,n) s+=min(mid,m*i)/i;
    return s;
}
void xuly()
{
   cin>>n>>m>>k;
   ll l=0,r=m*n;
   while(r-l>1)
   {
       ll mid=(l+r)/2;
       if(tinh(mid)>=k) r=mid;
       else l=mid;
   }
   cout<<r;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}
