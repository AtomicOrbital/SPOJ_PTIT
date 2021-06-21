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
ll dem(ll a[],ll x,ll n)
{
    ll dem=0;
    for(int j=1;j<=n;j++)
    {
        if(a[j]==x) dem++;
    }
    return dem;
}
ll a[N];
void xuly()
{
    ll n;
    cin>>n;
    f1(i,n) cin>>a[i];
    f1(i,n)
    {
        if(dem(a,a[i],n)>=2)
        {
            cout<<a[i]<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;
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
