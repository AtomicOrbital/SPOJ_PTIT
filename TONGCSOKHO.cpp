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
string numtostr(ll n)
{
    string s="";
    while(n!=0)
    {
        char c=n%10+'0';
        n/=10;
        s=c+s;
    }
    return s;
}
void xuly()
{
  string s;
  cin>>s;
  ll res=0;
  for(int i=0;i<s.length();i++) res+=s[i]-'0';
  if(res<=9) cout<<1;
  else
  {
      ll dem=1;
      while(1)
      {
          if(res<=9) break;
          string s1=numtostr(res);
          res=0;
          dem++;
          for(int i=0;i<s1.length();i++)
          {
             res+=s1[i]-'0';
          }
      }
      cout<<dem;
}
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
