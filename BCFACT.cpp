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
ll gt(ll n)
{
  if(n==0||n==1) return 1;
  return gt(n-1)*n;
}
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) return 0;
        cout<<gt(n)<<endl;
    }
}
