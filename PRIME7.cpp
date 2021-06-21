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
bool ngto(ll n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
void xuly()
{
    ll n,m=0;
    cin>>n;
    ll n1=n;
    ll a[10000],f[10000]={0};
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
                a[++m]=i;
                n/=i;
        }
    }
    if(n>1) a[++m]=n;
    if(m!=3) {cout<<0<<endl;return;}
    else if(m==3)
    {
        for(int i=1;i<=m;i++) f[a[i]]++;
        for(int i=1;i<=m;i++)
        {
            if(f[a[i]]>=2)
            {
                cout<<0<<endl;
                return ;
            }
        }
        cout<<1<<endl;
    }
}
int main()
{
      int t;
      cin>>t;
      while(t--) xuly();
      return 0;
}
