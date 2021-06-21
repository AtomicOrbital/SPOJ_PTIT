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
  ll n;
  cin>>n;
  vector<vector<ll>>a(n,vector<ll>(n));
  vector<vector<ll>>b(n,vector<ll>(n));
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
     cin>>a[i][j];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      cin>>b[i][j];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<a[i][j]+b[i][j]<<" ";
      }
      cout<<endl;
  }
  cout<<endl;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          cout<<a[i][j]-b[i][j]<<" ";
      }
      cout<<endl;
  }
}
