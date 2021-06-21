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
  while(cin>>s)
  {
      if(s=="0") break;
      ll dem=0;
      for(int i=0;i<s.length();i++)
      {
         int nam=s[i]-'0';
         if(nam>4) nam--;
         dem=dem*9+nam;
      }
      cout<<s<<": "<<dem<<endl;
  }
  return 0;
}
