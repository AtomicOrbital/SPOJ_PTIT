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
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
ll bcnn(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
void xuly()
{
    ll n;
    cin>>n;
    ll bc=1;
    for(int i=2;i<=n;i++) bc=bcnn(bc,i);
    cout<<bc<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
