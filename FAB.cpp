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
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return(a+b);
    return gcd(b,a%b);
}
ll xuly(ll a,ll b)
{
    if(b==0) return 0;
    if(a==b) return 1;
    if(a%b==0) return 1;
    if(b%a==0) return (b/a);
    return 1+xuly(a,b-gcd(a,b));
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll x,y;
  cin>>x>>y;
  cout<<xuly(x,y);
  return 0;
}
