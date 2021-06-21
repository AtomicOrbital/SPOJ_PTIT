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
  string s;
  cin>>s;
  ll l=0,r=0,lmax=0,rmax=0;
  ll maxn=0;
  for(int i=0;i<s.length();i++)
  {
     if(s[i]=='L')
     {
         l++;
         lmax++;
         maxn=max(lmax-r,maxn);
     }
     else if(s[i]=='R')
     {
         r++;
         rmax++;
         maxn=max(rmax-l,maxn);
     }
     else
     {
         lmax++;
         maxn=max(lmax-r,maxn);
         rmax++;
         maxn=max(rmax-l,maxn);
     }
  }
  cout<<maxn;
}
