#include<bits/stdc++.h>
#include<string>
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
  ll a,dem1=0,dem2=0;
  cin>>a;
  for(int i=1;i<=7;i++)
  {
      ll b;
      cin>>b;
      if(a<b) dem1++;
      else if(a>b) dem2++;
      a=b;
  }
  if(dem1==7) cout<<"ascending";
  else if(dem2==7) cout<<"descending";
  else cout<<"mixed";
  return 0;
}
