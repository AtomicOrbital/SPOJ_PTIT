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
bool nam(ll x)
{
   ll s=0;
   ll mid=n/2;
   for(int i=mid;i<n;i++)
   {
       if(x-a[i]>0) s+=x-a[i];
       if(s>k) return false;
   }
   if(s<=k) return true;
   return false;
}
void xuly()
{
   ll res;
   cin>>n>>k;
   f0(i,n) cin>>a[i];
   sort(a,a+n);
   ll l=a[0],r=a[n-1]+k;
   while(l<r)
   {
       ll mid=(l+r+1)/2;
       if(nam(mid))
       {
           l=mid;
           res=l;
       }
       else r=mid-1;
   }
   cout<<res;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}
