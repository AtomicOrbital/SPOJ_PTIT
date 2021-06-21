#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
//P202PROD
ll n;
ll f[N]={0};
void ktra()
{
    f[0]=0;
    f[1]=1;
    f[2]=2;
    f[3]=4;
    f[4]=8;
    for(int i=5;i<=50;i++)
    {
        f[i]=f[i-1]+f[i-2]+f[i-3]+f[i-4];
    }
}
void xuly()
{
   ktra();
   cin>>n;
   cout<<f[n]<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
