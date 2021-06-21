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
double a[N],b[N];
ll f[N];
void xuly()
{
    ll n,maxn=1;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
    for(int i=1;i<=200;i++) f[i]=0;
    for(int i=1;i<=n;i++)
    {
       ll ans=0;
       for(int j=1;j<i;j++)
       {
           if(a[i]>a[j]&&b[i]<b[j])
           {
               ans=max(ans,f[j]);
           }
       }
       f[i]=ans+1;
       maxn=max(maxn,f[i]);
    }
    cout<<maxn<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
