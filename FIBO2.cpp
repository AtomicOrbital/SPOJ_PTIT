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
ll f[N];
void xuly()
{
  f[0]=0;
  f[1]=1;
  for(int i=2;i<=100;i++) f[i]=f[i-1]+f[i-2];
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  xuly();
  while(t--)
  {
      ll n,kt=0;
      cin>>n;
      for(int i=0;i<=100;i++)
      {
          if(f[i]==n)
          {
              kt=1;
              break;
          }
      }
      if(kt==1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
  return 0;
}
