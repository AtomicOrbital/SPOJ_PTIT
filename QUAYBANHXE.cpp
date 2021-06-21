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
  int n,x,y,c,T=0;
  cin>>n;
  for(int i=1;i<n;i++) {cin>>x>>y>>c;T+=c;}
  cout<<T%2;
  return 0;
}
