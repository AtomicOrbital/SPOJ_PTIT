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
  ll l1,r1,l2,r2,k;
  cin>>l1>>r1>>l2>>r2>>k;
  ll res=0;
  if(l1>=l2&&r1<=r2)
    {
		res=r1-l1+1;
		if(k<=r1&&k>=l1) res--;
	}
  if(l1<=l2&&l2<=r1&&r2<=r1)
    {
		res=r2-l2+1;
		if(k<=r2&&k>=l2) res--;
	}
  if(l1>=l2&&l1<=r2&&r1>=r2)
   {
		res = r2-l1+1;
		if(k<=r2&&k>=l1) res--;
   }
  if(l1<=l2&&r1<=r2&&l2<=r1)
  {
		res=r1-l2+1;
		if(k<=r1&&k>=l2) res--;
  }
  cout<<res;
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
