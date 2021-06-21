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
ll a[N],b[N],n,ans=0;
void mergesort(ll l,ll r)
{
    if(l>=r) return;
    ll mid=(l+r)>>1;
    mergesort(l,mid);
    mergesort(mid+1,r);
    ll i=l,j=mid+1;
    for(int k=l;k<=r;k++)
    {
        if(i<=mid&&(j>r||a[i]<=a[j]))
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            ans+=(mid-i+1);
            j++;
        }
    }
    for(int k=l;k<=r;k++) a[k]=b[k];
}
main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    mergesort(1,n);
    cout<<ans;
    return 0;
}
