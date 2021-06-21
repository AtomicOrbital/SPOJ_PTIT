#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll tn(ll n)
{
    ll s=0;
    while(n!=0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
int main()
{
  ll a,b;
  cin>>a>>b;
  a=tn(a);b=tn(b);
  cout<<max(a,b);
  return 0;
}
