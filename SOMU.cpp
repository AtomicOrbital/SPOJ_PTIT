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
ll aModM(string s,ll mod)
{
    ll number=0;
    for (ll i=0;i<s.length();i++)
    {
        // (s[i]-'0') gives the digit value and form
        // the number
        number=(number*10+(s[i]-'0'));
        number%=mod;
    }
    return number;
}
// Returns find (a^b) % m
ll ApowBmodM(string a,ll b,ll m)
{
    // Find a%m
    ll ans=aModM(a,m);
    ll mul=ans;
    // now multiply ans by b-1 times and take
    // mod with m
    for (ll i=1;i<b;i++) ans=(ans*mul)%m;
    return ans;
}
void xuly()
{
  string a;
  cin>>a;
  ll b,m;
  cin>>b>>m;
  cout<<ApowBmodM(a,b,m)<<endl;
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
