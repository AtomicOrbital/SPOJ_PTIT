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
void xuly()
{
  ll n,s=0,k=0;
  cin>>n;
  while(k<n)
  {
     k++;
     ll x1,y1,z1,x2,y2,z2;
     cin>>x1>>y1>>z1>>x2>>y2>>z2;
     ll v=abs(x1-x2)*abs(y1-y2)*abs(z1-z2);
     s=max(s,v);
  }
  cout<<s;
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
