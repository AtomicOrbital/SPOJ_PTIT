#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=2e6+3;
const int MOD=1e9+7;
priority_queue<ll,vector<ll>,greater<ll>>a;
ll res=0;
void xuly()
{
   ll n;
   cin>>n;
   f0(i,n)
   {
     ll x;
     cin>>x;
     a.push(x);
   }
   while(a.size()!=1)
   {
     ll s=a.top();
     a.pop();
     s+=a.top();
     s%=MOD;
     a.pop();
     a.push(s);
     res+=s;
     res%=MOD;
   }
   cout<<res;
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
