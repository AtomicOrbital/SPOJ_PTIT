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
bool ss(ll a,ll b)
{
    ll n=10,m=10;
    while(a/n>0) n*=10;
    while(b/m>0) m*=10;
    return a*m+b>b*n+a;
}
ll a[N];
void xuly()
{
   ll n;
   cin>>n;
   f1(i,n) cin>>a[i];
   sort(a+1,a+n+1,ss);
   f1(i,n) cout<<a[i];
   cout<<endl;
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
