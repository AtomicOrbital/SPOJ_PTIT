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
const int Base=20122007;
ll Mymod(ll a,ll n)
{
    if(n==0) return 1;
    ll t=Mymod(a,n/2);
    t=(t*t)%Base;
    return n%2?(t*a)%Base:t;
}
int main()
{
    ll a,i,T=1;
    cin>>a;
    for(i=1;i*i<a;i++)
    if(a%i==0)
    {
        T=(T*(Mymod(3,i)-1))%Base;
        T=(T*(Mymod(3,a/i)-1))%Base;
    }
    if(i*i==a)T=(T*(Mymod(3,i)-1))%Base;
    cout<<T;
}
