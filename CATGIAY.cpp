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
ll dem=0;
int main()
{
  ll a,b;
  cin>>a>>b;
  ll minn=min(a,b);
  ll maxn=a+b-minn;
  if(maxn%minn==0) {cout<<maxn/minn;return 0;}
  while(maxn%minn!=0)
  {
         dem+=maxn/minn;
         maxn%=minn;
         swap(maxn,minn);
  }
  cout<<dem+maxn/minn;
}
