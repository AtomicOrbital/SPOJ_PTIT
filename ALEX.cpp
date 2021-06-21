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
ll a[N];
int main()
{
  string s;
  cin>>s;
  if(s=="-10") {cout<<0;return 0;}
  if(s[0]!='-') {cout<<s;return 0;}
  for(int i=0;i<s.length()-2;i++) cout<<s[i];
  if(s[0]=='-')
  {
      if(s[s.length()-1]>=s[s.length()-2]) cout<<s[s.length()-2];
      else cout<<s[s.length()-1];
  }
  return 0;
}
