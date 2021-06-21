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
ll strtonum(string a)
{
    ll s=0;
    for(int i=0;i<a.length();i++)
    {
        int res=a[i]-'0';
        s=s*10+res;
    }
    return s;
}
string numtostr(ll a)
{
    string s="";
    while(a!=0)
    {
       char c=a%10+'0';
       a/=10;
       s=c+s;
    }
    return s;
}
int main()
{
  string a,b,c;
  cin>>a>>b>>c;
  ll kt=0;
  for(int i=0;i<a.length();i++)
  {
      if(a[i]=='?')
      {
          kt=1;
          break;
      }
  }
  for(int i=0;i<b.length();i++)
  {
      if(b[i]=='?')
      {
          kt=2;
          break;
      }
  }
  if(kt==0)
  {
      ll a1=strtonum(a);
      ll b1=strtonum(b);
      ll kq=a1+b1;
      string s=numtostr(kq);
      for(int i=0;i<c.length();i++)
      {
          if(c[i]=='?')
          {
              cout<<s[i];
              return 0;
          }
      }
  }
  else if(kt==1)
  {
    ll a1=strtonum(b);
    ll b1=strtonum(c);
    ll kq=b1-a1;
    string s=numtostr(kq);
    for(int i=0;i<a.length();i++)
      {
          if(a[i]=='?')
          {
              cout<<s[i];
              return 0;
          }
      }
  }
  else if(kt=2)
  {
      ll a1=strtonum(a);
      ll b1=strtonum(c);
      ll kq=b1-a1;
      string s=numtostr(kq);
      for(int i=0;i<b.length();i++)
      {
          if(b[i]=='?')
          {
              cout<<s[i];
              return 0;
          }
      }
  }
  return 0;
}
