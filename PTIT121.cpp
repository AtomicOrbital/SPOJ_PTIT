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
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
      cin>>i;
      int r;cin>>r;
      string s;
      cin>>s;
      cout<<i<<" ";
      for(int j=0;j<s.length();j++)
      {
          for(int k=1;k<=r;k++)
            cout<<s[j];
      }
      cout<<endl;
  }
}
