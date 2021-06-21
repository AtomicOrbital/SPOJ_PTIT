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
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
      double n,l,m;
      cin>>n>>l>>m;
      ll dem=0;
      while(n<m)
      {
          dem++;
          n+=(n*l)/100;
      }
      cout<<dem<<endl;
  }
}
