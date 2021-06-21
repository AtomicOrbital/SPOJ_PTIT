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
void xuly()
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
  string c1="",c2="";
  for(int i=0;i<s.length();i++)
  {
      if(i%2==0)
      {
          c1+='r';
          c2+='b';
      }
      else
      {
          c1+='b';
          c2+='r';
      }
  }
  ll demr1=0,demb1=0,demr2=0,demb2=0;
  for(int i=0;i<s.length();i++)
  {
      if(c1[i]!=s[i])
      {
          if(c1[i]=='r') demr1++;
          else demb1++;
      }
      if(c2[i]!=s[i])
      {
          if(c2[i]=='r') demr2++;
          else demb2++;
      }
  }
  ll res1=max(demr1,demb1);
  ll res2=max(demr2,demb2);
  cout<<min(res1,res2);
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
