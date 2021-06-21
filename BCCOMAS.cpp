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
  cin>>s;
  for(int i=s.length()-1;i>=0;i--)
  {
      if((s.length()-i)%3==0)
      {
          r=s[i]+r;
          r=','+r;
      }
      else r=s[i]+r;
  }
  cout<<r;
  return 0;
}
