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
ll ngto(ll n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
void xuly()
{
    ll n;
    cin>>n;
    for(int i=2;i<=n;i++) {if(ngto(i)) cout<<i<<" ";}
    cout<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
