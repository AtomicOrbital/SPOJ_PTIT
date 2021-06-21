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
void xuly()
{
  string s;
  while(cin>>s)
  {
      ll f[30]={0},dem=0;
      for(int i=0;i<s.length();i++) f[s[i]-'a']++;
      for(int i=0;i<26;i++)
      {
          if(f[i]%2==1) dem++;
      }
      if(dem<2||dem%2==1) cout<<"First"<<endl;
      else cout<<"Second"<<endl;
  }
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
