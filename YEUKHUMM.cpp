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
ll a[N];
void xuly()
{
  ll n;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  ll le=0,chan=0;
  for(int i=1;i<=n;i++)
  {
      if(a[i]%2==0) chan++;
      else le++;
  }
  if(le==0) cout<<0;
  else
  {
    ll pos,s=0;
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++) s+=a[i];
    if(s%2==1) cout<<s;
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i]%2==1)
            {
                pos=a[i];
                break;
            }
        }
        s-=pos;
        cout<<s;
    }
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
