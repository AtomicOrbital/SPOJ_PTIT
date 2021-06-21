#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const ll N=2147483648+2;
const int MOD=1e9+7;
bool c[2147483648+2];
unsigned long long d[2147483648+2];
ll snt(ll n)
{
    for(int i=1;i<=n;i++)
    {
        c[i]=true;
        d[i]=i;
    }
    c[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(c[i])
        {
            d[i]=d[i-1]+1;
            ll j=i*i;
            while(j<=n)
            {
                if(c[j]) c[j]=false;
                j+=i;
            }
        }
        else d[i]=d[i-1];
    }
}
void xuly()
{
    ll l,r;
    cin>>l>>r;
    snt(N);
    ll dem=d[r]-d[l];
    cout<<dem<<endl;
}
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++) xuly();
  return 0;
}
