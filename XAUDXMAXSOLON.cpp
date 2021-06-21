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
ll l[2001][2001];
void xuly()
{
  string s;
  cin>>s;
  ll n=s.length();
  for(int i=0;i<=n;i++)
  {
      l[i][n+1]=0;
      l[0][i]=0;
  }
  f1(i,n)
  {
      for(int j=n;j>=1;j--)
      {
          if(s[i]==s[j]) l[i][j]=l[i-1][j+1]+1;
          else l[i][j]=max(l[i-1][j],l[i][j+1]);
      }
  }
  ll i=n,j=1;
  string kq="";
  while(i>0&&j<n+1)
  {
      if(s[i]==s[j])
      {
          kq=kq+s[i];
          i--;
          j++;
      }
      else
      {
          if(l[i][j]==l[i-1][j]) i--;
          else j++;
      }
  }
  cout<<l[n][1]<<endl;
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
