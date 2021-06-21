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
ll a[N],f[N]={0};
void xuly()
{
    ll n,m=0;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
          a[++m]=i;
          n/=i;
        }
    }
    if(n>1) a[++m]=n;
    sort(a+1,a+m+1);
    for(int i=1;i<=m;i++) f[a[i]]++;
    for(int i=1;i<=m;i++)
    {
        if(f[a[i]]>0) cout<<a[i]<<" "<<f[a[i]]<<" ";
        f[a[i]]=0;
    }
    cout<<endl;
    for(int i=1;i<=m;i++) f[a[i]]=0;
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
