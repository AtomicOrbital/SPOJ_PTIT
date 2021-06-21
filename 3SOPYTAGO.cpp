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
  f1(i,n) cin>>a[i];
  f1(i,n) a[i]*=a[i];
  sort(a+1,a+n+1);
  for(int i=n;i>=2;i--)
  {
      ll l=1,r=i;
      while(l<r)
      {
          if(a[l]+a[r]==a[i])
          {
              cout<<"YES"<<endl;
              return;
          }
          else if(a[l]+a[r]>a[i]) r--;
          else l++;
      }
  }
  cout<<"NO"<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
