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
  string s;
  cin>>s;
  ll dem=0;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='0'||s[i]=='4'||s[i]=='8') dem++;
  }
  for(int i=0;i<s.length()-1;i++)
  {
      int h=(s[i]-'0')*10+(s[i+1]-'0');
      if(h%4==0) dem+=i+1;
  }
  cout<<dem;
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
