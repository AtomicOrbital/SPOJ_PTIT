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
  ll s=sqrt(a*b*c);
  ll x1=s/a;
  ll x2=s/b;
  ll x3=s/c;
  cout<<4*(x1+x2+x3);
}
