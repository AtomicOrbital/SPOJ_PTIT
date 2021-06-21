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
const int N=1e7+3;
const ll MOD=1e13+7;
void xuly()
{
    ll n;
    cin>>n;
    vector<bool>a(N,false);
    f0(i,n)
    {
        ll x;
        cin>>x;
        if(x>=0&&x<=N-3) a[x]=true;
    }
    f0(i,n)
    {
        if(a[i]) cout<<i<<" ";
        else cout<<-1<<" ";
    }
    cout<<endl;
}
main()
{
    int t;
    cin>>t;
    while(t--) xuly();
    return 0;
}
