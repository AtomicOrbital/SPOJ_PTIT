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
ll a[N];
void xuly()
{
    ll n,dem=0;
    cin>>n;
    f1(i,n) cin>>a[i];
    for(int i=1;i<=n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            a[i]*=2;
            a[i+1]=0;
        }
    }
    f1(i,n)
    {
        if(a[i]==0) dem++;
        else cout<<a[i]<<" ";
    }
    f1(i,dem) cout<<0<<" ";
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
