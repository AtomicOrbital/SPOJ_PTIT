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
ll a[N];
ll nho(ll arr[],ll n,ll x)
{
    ll curr_sum=0,min_len=n+1;
    ll start=0,endd=0;
    while(endd<n)
    {
        while(curr_sum<=x&&endd<n) curr_sum+=arr[endd++];
        while(curr_sum>x&&start<n)
        {
            if(endd-start<min_len) min_len=endd-start;
            curr_sum-=arr[start++];
        }
    }
    return min_len;
}
void xuly()
{
  ll n,k;
  cin>>n>>k;
  f0(i,n) cin>>a[i];
  ll dem=nho(a,n,k);
  if(dem==n+1) cout<<0<<endl;
  else cout<<dem<<endl;
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
