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
ll a[N],b[N];
ll bina(ll a[],ll l,ll r,ll k)
{
    ll ans=-1;
    while(l<=r)
    {
       ll mid=(l+r)/2;
       if(a[mid]<=k) {l=mid+1;ans=mid;}
       else r=mid-1;
    }
    return ans;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,m;
  cin>>n>>m;
  f0(i,n) cin>>a[i];
  sort(a,a+n);
  f0(i,m) cin>>b[i];
  ll kt,dem;
  f0(i,m)
  {
    kt=b[i];
    if(kt<a[0]) cout<<0<<endl;
    else
    {
        ll pos=bina(a,0,n-1,kt);
        cout<<pos+1<<endl;
    }
  }
  return 0;
}
