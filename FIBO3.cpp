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
ll a[500],f[500];
void xuly()
{
    ll n;
    cin>>n;
    f(i,1,n) cin>>a[i];
    f[0]=0;
    f[1]=1;
    f(i,2,150) f[i]=f[i-1]+f[i-2];
    f(i,1,n)
    {
        if(a[i]==0) sp(a[i]);
        for(int j=2;j<=150;j++)
        {
            if(f[j]==a[i]) sp(a[i]);
        }
    }
    cout<<endl;
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
