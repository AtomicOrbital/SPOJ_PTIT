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
const int N=1e6+3;
const int MOD=1e9+7;
//P202PROB
ll s2n(string s)
{
    stringstream ss;
    ll ans;
    ss<<s;
    ss>>ans;
    return ans;
}
void xuly()
{
   string s;
   cin>>s;
   ll res=0;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='0'||s[i]=='4'||s[i]=='8') res++;
   }
   for(int i=0;i<s.length()-1;i++)
   {
       ll x=(s[i]-'0')*10+(s[i+1]-'0');
       if(x%4==0) res+=i+1;
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
