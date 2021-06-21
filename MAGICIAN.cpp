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
struct game
{
    string id;
    string s;
    char c;
};
bool ss(game a,game b)
{
    if(a.id.length()==b.id.length())
    {
        return a.id>b.id;
    }
    return a.id.length()>b.id.length();
}
void xuly()
{
  ll n;
  cin>>n;
  vector<game>a(n);
  for(int i=0;i<n;i++) cin>>a[i].id>>a[i].s>>a[i].c;
  sort(a.begin(),a.end(),ss);
  //for(int i=0;i<n;i++) cout<<a[i].id<<" "<<a[i].s<<" "<<a[i].c<<endl;
  for(int i=n-1;i>=0;i--)
  {
      if(a[i].s=="AM"&&a[i].c=='W')
      {
          cout<<a[i].id;
          return ;
      }
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
