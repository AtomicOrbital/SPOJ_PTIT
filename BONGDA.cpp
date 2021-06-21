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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n,dem1=0,dem2=0;
  cin>>n;
  string s[n],r;
  cin>>s[0];
  dem1++;
  for(int i=1;i<n;i++)
  {
      cin>>s[i];
      if(s[i]==s[0]) dem1++;
      else {dem2++;r=s[i];}
  }
  if(dem1>dem2) cout<<s[0];
  else cout<<r;
  return 0;
}
