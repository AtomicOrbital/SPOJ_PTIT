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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  while(cin>>n)
  {
      ll tanso[20];
      for(int i=0;i<=9;i++) tanso[i]=0;
      ll k=0;
      while(1)
      {
          ll kt=1;
          for(int i=0;i<=9;i++)
          {
              if(tanso[i]==0)
              {
                  kt=0;
                  break;
              }
          }
          if(kt==1) break;
          k++;
          ll s=n*k;
          ll p=1;
          while((s/p)!=0)
          {
             ll m=(s/p)%10;
             tanso[m]=1;
             p*=10;
          }
      }
      cout<<k<<endl;
  }
  return 0;
}
