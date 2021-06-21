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
    ll a[2000],f[2000]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }
    ll maxn=-1e5;
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(f[a[i]]>maxn) maxn=f[a[i]];
    }
    for(int i=1;i<=n;i++)
    {
        if(f[a[i]]==maxn)
        {
            cout<<a[i]<<endl;
            return;
        }
    }
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
