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
//P202PROJ
void xuly()
{
  string s;
  cin>>s;
  ll dp1[s.length()]={0};
  ll dp2[s.length()]={0};
  if(s[0]=='1') dp1[0]++;
  if(s[0]=='2') dp2[0]++;
  for(int i=1;i<s.length();i++)
  {
     dp1[i]=dp1[i-1];
     dp2[i]=dp2[i-1];
     if(s[i]=='1') dp1[i]++;
     if(s[i]=='2') dp2[i]++;
  }
  ll res=0;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='1')
      {
          res+=(dp2[s.length()-1]-dp2[i]);
      }
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
