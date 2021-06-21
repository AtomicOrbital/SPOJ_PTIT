#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll ktra(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='8'||s[i]=='9'||s[i]=='0') return 0;
    }
    return 1;
}
int main()
{
  ll n,m=0,x=0;
  cin>>n;
  string s;
  cin>>s;
  if(ktra(s))
  {
      for(int i=0;i<n/2;i++)
      {
          x+=(int)s[i]-48;
      }
      for(int i=n/2;i<n;i++)
      {
          m+=(int)s[i]-48;
      }
      if(x==m) cout<<"YES";
      else cout<<"NO";
  }
  else cout<<"NO";
}
