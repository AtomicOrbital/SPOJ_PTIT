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
ll f[N]={0};
int main()
{
  string s,r;
  getline(cin,s);
  getline(cin,r);
  ll dem=0;
  for(int i=0;i<s.length();i++) f[s[i]]++;
  for(int j=0;j<r.length();j++)
  {
      if(f[r[j]]>=1) f[r[j]]--;
      else f[r[j]]++;
  }
  for(int i=0;i<s.length();i++) {dem+=f[s[i]];f[s[i]]=0;}
  for(int j=0;j<r.length();j++)
  {
      dem+=f[r[j]];
      f[r[j]]=0;
  }
  cout<<dem;
}
