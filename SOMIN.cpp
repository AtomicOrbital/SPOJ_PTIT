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
void xuly()
{
   string s;
   cin>>s;
   while(s[0]=='0') s.erase(s.begin());
   for(int i=0;i<s.length();i++)
   {
       int k=s[i]-'0';
       k=min(k,9-k);
       s[i]=k+'0';
   }
   if(s[0]=='0') s[0]='9';
   ll pos=s.length();
   cout<<s<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
