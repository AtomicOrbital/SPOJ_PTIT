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
  ll n,k;
  cin>>n>>k;
  if(k%(n-1)==0)
  {
    ll x=k/(n-1)*n;
    ll y=k+(k/(n-1))-1;
    cout<<min(x,y)<<" "<<max(x,y);
  }
  else
  {
      ll x=k/(n-1);
      cout<<x+k<<" "<<x+k;
  }
  return 0;
}
