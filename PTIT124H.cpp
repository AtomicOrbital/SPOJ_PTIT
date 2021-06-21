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
  ll a,b,c,d,e,f;
  cin>>a>>b>>c>>d>>e>>f;
  if(a==c) cout<<e;
  else if(a==e) cout<<c;
  else cout<<a;
  cout<<" ";
  if(b==d) cout<<f;
  else if(b==f) cout<<d;
  else cout<<b;
  return 0;
}
