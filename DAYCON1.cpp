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
void xuly()
{
  ll n,s;
  cin>>n>>s;
  ll dem=0,minn=1e9+7;
  ll h=0;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++)
  {
    dem=0;
    h=0;
    while(h<s)
    {
        h+=a[i];
        dem++;
    }
    minn=min(minn,dem);
  }
  if(minn==1e9+7) cout<<0<<endl;
  else cout<<minn<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) xuly();
    return 0;
}
