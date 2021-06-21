#include<bits/stdc++.h>
#include<string>
#include<vector>
#define endl '\n'
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
struct tui
{
    ll w,v;
};
ll n,m,n1,n2,s[N];
tui au1[N],au2[N],t;
vector<tui>p1,p2;
bool ss(tui a,tui b)
{
    if(a.w>=b.w) return 0;
    return 1;
}
void sinh1(ll u,ll w,ll v)
{
   if(w>m) return;
   if(u==n1+1)
   {
      t.w=w;
      t.v=v;
      p1.push_back(t);
      return;
   }
   else
   {
       sinh1(u+1,w,v);
       sinh1(u+1,w+au1[u].w,v+au1[u].v);
   }
}
void sinh2(ll u,ll w,ll v)
{
   if(w>m) return;
   if(u==n2+1)
   {
      t.w=w;
      t.v=v;
      p2.push_back(t);
      return;
   }
   else
   {
       sinh2(u+1,w,v);
       sinh2(u+1,w+au2[u].w,v+au2[u].v);
   }
}
ll bina(ll l,ll r,ll x)
{
    ll ans=-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(p2[mid].w<=x)
        {
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
    }
    return ans;
}
int main()
{
  cin>>n>>m;
  n1=n/2;
  n2=n-n1;
  f1(i,n1) cin>>au1[i].w>>au1[i].v;
  f1(i,n2) cin>>au2[i].w>>au2[i].v;
  sinh1(1,0,0);
  sinh2(1,0,0);
  sort(p2.begin(),p2.end(),ss);
  s[0]=p2[0].v;
  ll ans=0;
  f1(i,p2.size()-1)
  {
      s[i]=max(s[i-1],p2[i].v);
      ans=max(ans,p2[i].v);
  }
  f0(i,p1.size())
  {
      ll pos=bina(0,p2.size()-1,m-p1[i].w);
      if(pos!=-1) ans=max(ans,s[pos]+p1[i].v);
      ans=max(ans,p1[i].v);
  }
  cout<<ans;
  return 0;
}
