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
  cin>>s;
  string res="";
  vector<int>a;
  for(int i=0;i<=s.size();i++)
  {
      a.push_back(i+1);
      if(i==s.length()||s[i]=='I')
      {
          while(!a.empty())
          {
              res+=to_string(a.back());
              a.erase(a.begin()+a.size()-1);
          }
      }
  }
  cout<<res<<endl;
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
