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
ll nhan(ll n,ll m,ll k)
{
    if(m==0) return 0;
    if(m%2==0) return nhan(n*2%k,m/2,k)%k;
    return (nhan(n%k,m-1,k)%k+n%k)%k;
}
ll poww(ll n,ll m,ll k)
{
    if(m==0) return 1;
    ll p=poww(n,m/2,k);
    ll res=nhan(p,p,k);
    if(m%2==1) res=nhan(res,n,k);
    return res;
}
void xuly()
{
   ll n,m,k;
   cin>>n>>m>>k;
   cout<<poww(n,m,k)<<endl;
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
