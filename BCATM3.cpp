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
    ll n;
    cin>>n;
    ll s=0;
    s+=n/500;
    n%=500;
    s+=n/200;
    n%=200;
    s+=n/100;
    n%=100;
    s+=n/50;
    n%=50;
    s+=n/20;
    n%=20;
    s+=n/10;
    n%=10;
    s+=n/5;
    n%=5;
    s+=n/2;
    n%=2;
    s+=n;
    cout<<s<<endl;
}
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++) xuly();
}
