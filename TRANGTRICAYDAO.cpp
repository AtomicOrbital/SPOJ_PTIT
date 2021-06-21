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
ll f[N]={0},a[N]={0},c[N]={0};
void xuly()
{
  ll v,x,d;
  cin>>v>>x>>d;
  ll ans=d;
  for(int i=1;i<=v;i++) a[i]++;
  for(int i=1;i<=x;i++) c[i]++;
  for(int i=1;i<=d;i++) f[i]++;
  for(int i=d;i>=1;i--)
  {
    if(f[ans]>0&&c[ans-1]>0&&a[ans-2]>0)
    {
        cout<<ans+ans-1+ans-2;
        return;
    }
    else ans--;
  }
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
