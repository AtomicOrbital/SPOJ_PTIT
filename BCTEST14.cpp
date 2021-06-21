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
  ll a,b,v;
  cin>>a>>b>>v;
  if(a==v) cout<<0;
  else
  {
      ll x1=v-b;
      ll x2=a-b;
      if(x1%x2==0) cout<<x1/x2;
      else cout<<x1/x2+1;
  }
}
