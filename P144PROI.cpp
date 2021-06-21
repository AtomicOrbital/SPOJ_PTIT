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
ll a[N],b[N];
int main()
{
  ll n;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
  ll minn=a[1],maxn=b[1];
  for(int i=1;i<=n;i++)
  {
      if(a[i]<minn) minn=a[i];
      if(b[i]>maxn) maxn=b[i];
  }
  for(int i=1;i<=n;i++)
  {
      if(a[i]==minn&&b[i]==maxn)
      {
          cout<<i;
          return 0;
      }
  }
  cout<<-1;
}
