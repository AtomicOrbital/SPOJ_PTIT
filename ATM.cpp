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
ll a[N];
vector<ll>b(N,0);
void xuly()
{
  ll n,s;
  cin>>n>>s;
  f0(i,n) cin>>a[i];
  for(int i=0;i<=s;i++) b[i]=0;
  f0(i,n) b[a[i]]=1;
  for(int i=1;i<=s;i++)
  {
      f0(j,n)
      {
          if(i>=a[j])
          {
              if((b[i]>b[i-a[j]]+1&&b[i-a[j]]!=0)||b[i]==0&&b[i-a[j]]!=0)
              {
                  b[i]=b[i-a[j]]+1;
              }
          }
      }
  }
  if(b[s]<=0) cout<<-1<<endl;
  else cout<<b[s]<<endl;
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
