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
  ll a,b,c;
  cin>>a>>b>>c;
  ll maxn=max(max(a,b),c);
  ll minn=min(min(a,b),c);
  ll trung=a+b+c-maxn-minn;
  ll d1=trung-minn,d2=maxn-trung;
  if(d1==d2) cout<<maxn+d2;
  else
  {
      if((trung+minn)%2==0)
      {
          ll ans1=(trung+minn)/2;
          if(ans1-minn==d2) cout<<ans1;
      }
      else if((maxn+trung)%2==0)
      {
          ll ans1=(maxn+trung)/2;
          if(maxn-ans1==d1) cout<<ans1;
      }
  }
  return 0;
}
