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
void xuly()
{
  string s;
  cin>>s;
  ll res=0,sum=0;
  for(int i=0;i<s.length();i++)
  {
      res+=s[i]-'0';
  }
  for(int i=s.length()-2;i<=s.length()-1;i++) sum=sum*10+s[i];
  if(sum%4==0&&res%9==0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
