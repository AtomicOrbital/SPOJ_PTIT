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
struct xuxsac
{
    int p,q;
    xuxsac(int x,int y)
    {
        p=x;
        q=y;
    }
};
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<xuxsac>f;
  ll x,y,a,b;
  cin>>x>>y>>a>>b;
  for(int i=a;i<=x;i++)
  {
      for(int j=b;j<i&j<=y;j++)
      {
          f.push_back(xuxsac(i,j));
      }
  }
  cout<<f.size()<<endl;
  for(int i=0;i<f.size();i++)
  {
      cout<<f[i].p<<" "<<f[i].q<<endl;
  }
  return 0;
}
