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
  ll n;
  cin>>n;
  ll s=0,f=0;
  ll minn=1e6,minx=1e6;
  for(int i=1;i<=n;i++)
  {
      ll a,b;
      cin>>a>>b;
      s+=a;
      f+=b;
      if(a<minn) minn=a;
      if(b<minx) minx=b;
  }
  s+=minx;f+=minn;
  cout<<max(s,f);
}
