#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll a[N],n,k;
void ktao()
{
    cin>>n>>k;
    f0(i,n) cin>>a[i];
}
ll bina(ll l,ll r,ll k)
{
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(a[mid]==k) return mid;
        else if(a[mid]>k) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
void xuly()
{
    if(k==0)
    {
        f0(i,n)
        {
            if(a[i]==0)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        f0(i,n) a[i]+=a[i-1];
        f0(i,n)
        {
            if(a[i]==k)
            {
                cout<<"YES"<<endl;
                return;
            }
            else if(a[i]>k)
            {
                ll pos=bina(0,n-1,a[i]-k);
                if(pos!=-1)
                {
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        cout<<"NO"<<endl;
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
      ktao();
      xuly();
  }
  return 0;
}
