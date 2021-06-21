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
const int MOD=1e9+7;
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,d,n,i,maxn,max1,N1;
    cin>>a>>b;
    if(a<b) swap(a,b);
    if(a==b) {cout<<1;return 0;}
    d=a-b;
    n=(b/d+1)*d-b;
    maxn=(a+n)/gcd(a+n,b+n)*(b+n);
    for(ll x=2;x*x<=d;x++)
    if(d%x==0)
    {
            N1=(b/x+1)*x-b;
            if(N1<n)
            {
               max1=(a+N1)/gcd(a+N1,b+N1)*(b+N1);
               if(maxn>=max1) {maxn=max1;n=N1;}
            }
            ll y=d/x;
            N1=(b/y+1)*y-b;
            if(N1<n)
            {
            ll max1=(a+N1)/gcd(a+N1,b+N1)*(b+N1);
            if(maxn>=max1) {maxn=max1;n=N1;}
            }
    }
    cout<<n;
}
