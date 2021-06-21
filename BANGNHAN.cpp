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
  ll n,x,dem=0;
  cin>>n>>x;
  if(x==1) {cout<<1;return 0;}
  for(int i=1;i<=sqrt(x)&&i<=n;i++)
  {
      if(x%i==0)
      {
          if(x/i<=n)
          {
               if(i!=x/i) dem+=2;
               else dem++;
          }
      }
  }
  cout<<dem;
}
