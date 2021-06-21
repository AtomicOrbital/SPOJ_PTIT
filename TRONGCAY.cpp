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
struct tree
{
  ll t;
  double x;
};
bool ss(tree a,tree b) {return a.x<b.x;}
int main()
{
  ll n,m;
  cin>>n>>m;
  tree *T=new tree[n+5];
  for(ll i=1;i<=n;i++) cin>>T[i].t>>T[i].x;
  sort(T+1,T+n+1,ss);
  ll *c=new ll [n+5];
  c[1]=1;
  for(int i=2;i<=n;i++)
  {
   c[i]=1;
   for(int j=i-1;j>=1;j--)
   {
       if(T[i].t>=T[j].t)
       {
         if(c[i]<c[j]+1) c[i]=c[j]+1;
       }
   }
  }
    ll maxn=1;
    for(int i=2;i<=n;i++) if(maxn<c[i]) maxn=c[i];
    cout<<n-maxn;
}
