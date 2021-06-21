#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
string al=ALPHAA;
ll a[300],dem1=0,dem2=0,ans=1;
void xuly()
{
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
     if(i==0)
     {
         if(s[i]=='?') ans*=9;
         else if(s[i]>='A'&&s[i]<='Z')
         {
             ans*=9;
             a[s[i]]++;
             dem1++;
         }
     }
     else
     {
         if(s[i]=='?') {dem2++;}
         else if(s[i]>='A'&&s[i]<='Z'&&a[s[i]]==0)
         {
             ans*=(10-dem1);
             a[s[i]]++;
             dem1++;
         }
     }
  }
  cout<<ans;
  f1(i,dem2) cout<<0;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}
