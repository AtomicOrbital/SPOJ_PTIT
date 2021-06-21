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
int main()
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll dem1=0,dem2=0;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='S') dem1++;
      else dem2++;
  }
  if(dem1==n) cout<<dem1;
  else cout<<dem1+(1+dem2/2);
}
