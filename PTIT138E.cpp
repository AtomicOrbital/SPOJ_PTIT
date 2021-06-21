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
void xuli()
{
    ll n;
    cin>>n;
    ll tmp=0,dem=1;
    while(n/10!=0)
    {
        tmp=(n%10+tmp>=5);
        n=n/10;
        dem=dem*10;
    }
    cout<<(n+tmp)*dem<<endl;
}
int main()
{
    int test;
    cin>>test;
    for(long i=1;i<=test;i++) xuli();
    return 0;
}
