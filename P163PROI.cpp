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
  ll d1,d2,d3;
  cin>>d1>>d2>>d3;
  ll minn=min(min(d1,d2),d3);
  ll maxn=max(max(d1,d2),d3);
  ll trung=d1+d2+d3-maxn-minn;
  if((trung+minn)<maxn) cout<<(trung+minn)*2;
  else cout<<d1+d2+d3;
  return 0;
}
