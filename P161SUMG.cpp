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
int main()
{
  ll a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  ll ans=a+b+c+d+e;
  if(ans%5==0&&ans>0) cout<<ans/5;
  else cout<<-1;
  return 0;
}
