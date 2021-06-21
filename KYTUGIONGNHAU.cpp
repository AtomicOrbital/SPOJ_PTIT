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
ll a[N];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  getline(cin,s);
  ll m;
  cin>>m;
  for(int i=0;i<s.length()-1;i++)
  {
      if(s[i]==s[i+1]) a[i+1]=a[i]+1;
      else a[i+1]=a[i];
  }
  for(int i=1;i<=m;i++)
  {
      ll l,r;
      cin>>l>>r;
      cout<<a[r-1]-a[l-1]<<endl;
  }
  return 0;
}
