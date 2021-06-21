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
  ll m,n;
  cin>>m>>n;
  vector<string>s(m);
  for(int i=0;i<m;i++) cin>>s[i];
  for(int i=1;i<=n;i++)
  {
      ll l,r;
      cin>>l>>r;
      string res=s[l-1];
      s.erase(s.begin()+(l-1));
      s.insert(s.begin()+r-1,res);
  }
  for(int i=0;i<m;i++) cout<<s[i]<<" ";
  cout<<endl;
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
