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
  ll x,y,x1,y1,r;
  cin>>r>>x>>y>>x1>>y1;
  double l=sqrt(pow(x-x1,2)+pow(y-y1,2));
  ll k=(l+2*r-1)/(2*r);
  cout<<k;
  return 0;
}
