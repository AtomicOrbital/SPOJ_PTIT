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
  ll m,n,k;
  cin>>m>>n>>k;
  ll maxn=min(m/2,n);
  if((m-maxn*2+n-maxn)>=k) cout<<maxn;
  else
  {
      while(maxn!=0&&(m-maxn*2+n-maxn)<k) maxn--;
      cout<<maxn;
  }
}
