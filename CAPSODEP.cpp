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
void xuly()
{
  ll x,y,m;
  cin>>x>>y>>m;
  ll dem=0;
  ll a=max(x,y);
  ll b=min(x,y);
  if(a<=0) {cout<<-1;return;}
  if(a>=m) {cout<<0;return;}
  if(b<0)
  {
    ll k=-b/a;
    dem+=k;
    b+=k*a;
  }
  while(b<m&&a<m)
  {
      x=max(a+b,a);
      y=min(a+b,a);
      a=x;
      b=y;
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
