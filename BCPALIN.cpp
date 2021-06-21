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
void xuly()
{
  ll n,s=0;
  cin>>n;
  ll m=n;
  while(n!=0)
  {
      s=s*10+n%10;
      n/=10;
  }
  if(s==m) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) xuly();
    return 0;
}
