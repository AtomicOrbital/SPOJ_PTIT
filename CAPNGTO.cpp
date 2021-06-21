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
bool c[N];
void snt(ll n)
{
    for(int i=1;i<=n;i++)
    {
      c[i]=true;
    }
    c[0]=c[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(c[i]==true)
        {
            for(ll j=i*i;j<=n;j+=i) c[j]=false;
        }
    }
}
void xuly()
{
    ll l,r,dem=0;
    cin>>l>>r;
    snt(r);
    for(int i=l;i<=r;i++)
    {
        if(c[i]==true&&c[i+6]==true&&i+6<=r) dem++;
    }
    cout<<dem<<endl;
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
