#include<bits/stdc++.h>
#include<string>
#include<vector>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
const ll inf =LLONG_MAX;
const ll ninf=LLONG_MIN;
const int oo=INT_MAX;
const int noo=INT_MIN;
const int N=1e6+3;
const int MOD=1e9+7;
ll a[N];
void xuly()
{
  ll n,k,dem1=0,dem2=0;
  cin>>n>>k;
  f0(i,n)
  {
      cin>>a[i];
      if(a[i]<=k) dem1++;
  }
  for(int i=0;i<dem1;i++)
  {
      if(a[i]>k) dem2++;
  }
  ll ans=dem2;
  for(int i=0,j=dem1;j<n;i++,j++)
  {
      if(a[i]>k) dem2--;
      if(a[j]>k) dem2++;
      ans=min(ans,dem2);
  }
  cout<<ans<<endl;
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
