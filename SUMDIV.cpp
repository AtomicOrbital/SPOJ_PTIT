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
    ll x=sqrt(n);
    if(x*x==n)
    {
        ll s=0;
        for(int i=1;i<=x;i++)
        {
            if(n%i==0)
            {
                s+=i;
                s+=n/i;
            }
        }
        s-=x;
        cout<<s<<endl;
    }
    else
    {
        ll s=0;
        for(int i=1;i<=x;i++)
        {
            if(n%i==0)
            {
                s+=i;
                s+=n/i;
            }
        }
        cout<<s<<endl;
    }
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
