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
void xuly()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll s1=sqrt(a*b*c)/a;
    ll s2=sqrt(a*b*c)/b;
    ll s3=sqrt(a*b*c)/c;
    cout<<4*(s1+s2+s3)<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
