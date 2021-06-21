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
  while(t--)
  {
      string s;
      cin>>s;
      string x;
      ll dem=0;
      for(int i=s.length()-1;i>=0;i--)
      {
          x=x+s[i];
      }
      for(int i=1;i<s.length();i++)
      {
        if(abs(s[i]-s[i-1])!=abs(x[i]-x[i-1])) dem++;
      }
      if(dem==0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}
