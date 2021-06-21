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
  string s,r;
  ll t=0;
  while(1)
  {
      cin>>s>>r;
      if(s=="END"&&r=="END") break;
      t++;
      ll dem=1;
      ll f[200],a[200];
      for(int i=32;i<=126;i++)
      {
          f[i]=0;
          a[i]=0;
      }
      for(int i=0;i<s.length();i++) f[s[i]-0]++;
      for(int j=0;j<r.length();j++) a[r[j]-0]++;
      for(int i=97;i<=122;i++)
      {
          if(f[i]!=a[i])
          {
              dem=0;
              break;
          }
      }
      if(dem==1) cout<<"Case "<<t<<": "<<"same"<<endl;
      else cout<<"Case "<<t<<": "<<"different"<<endl;
  }
}
