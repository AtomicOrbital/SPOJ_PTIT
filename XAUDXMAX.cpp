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
//ll f[1000][1000]={0};//do dai xau con doi xung tu si den sj
// muom fij dx thi doan tu i+1 den j-1 pai doi xung
void xuly()
{
  string s;
  cin>>s;
  ll len=1;
  // neu s.size le thi co 1 tam doi xung
  for(int i=0;i<s.length();i++)
  {
      ll u=i,v=i;
      while(u>=0&&v<s.length())
      {
          if(s[u]==s[v])
          {
              len=max(len,v-u+1);
              u--;v++;
          }
          else break;
      }
  }
  // neu s.length() chan thi co 2 tam doi xung la i va i+1
  for(int i=0;i<s.length();i++)
  {
      ll u=i,v=i+1;
      while(u>=0&&v<s.length())
      {
          if(s[u]==s[v])
          {
              len=max(len,v-u+1);
              u--;v++;
          }
          else break;
      }
  }
  cout<<len<<endl;
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
