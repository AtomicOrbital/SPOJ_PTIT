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
long n,x,a[N],d[N],f[N];
void update(ll x,ll val)
{
    while(x<=100005)
    {
        d[x]=min(d[x],val);
        x+=(x&-x);
    }
}
ll get(ll x)
{
    ll res=n+1;
    while(x)
    {
        res=min(res,d[x]);
        x-=(x&-x);
    }
    return res;
}
ll kqq=0;
int main()
{
    cin>>n>>x;
    n++;
    for(ll i=2;i<=n;++i)
    {
        cin>>a[i];
        a[i]-=x;
    }
    a[1]=0;
    for(ll i=2;i<=n;++i)
    {
        f[i]=f[i-1]+a[i];
        a[i]=f[i];
    }
    for(ll i=1;i<=n;++i)
    {
        d[i]=n+2;
    }
    sort(f+1,f+1+n);
    for(ll i=1;i<=n;++i)
    {
        a[i]=lower_bound(f+1,f+1+n,a[i])-f;
    }
    update(a[1],1);
    for(ll i=2;i<=n;++i)
    {
        ll id=get(a[i]);
        kqq=max(kqq,i-id);
        update(a[i],i);
    }
    cout<<kqq;
    return 0;
}
