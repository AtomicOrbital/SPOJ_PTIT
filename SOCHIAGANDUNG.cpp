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
void xuly()
{
    ll a,l,r,dem=0;
    cin>>a>>l>>r;
    ll minn=l/a;
    ll maxn;
    if(r%a==0) maxn=(r/a)-1;
    else maxn=r/a;
    for(int i=1;i<=sqrt(minn);i++)
    {
        if(minn%i==0)
        {
            if(a*minn+i>=l&&a*minn+i<=r) dem++;
            if(a*minn+minn/i>=l&&a*minn+minn/i<=r) dem++;
            if(minn/i==i) dem--;
        }
    }
    for(int i=1;i<=sqrt(maxn);i++)
    {
        if(maxn%i==0)
        {
           if(a*maxn+i>=l&&a*maxn+i<=r) dem++;
           if(a*maxn+maxn/i>=l&&a*maxn+maxn/i<=r) dem++;
           if(maxn/i==i) dem--;
        }
    }
    cout<<dem-1<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
