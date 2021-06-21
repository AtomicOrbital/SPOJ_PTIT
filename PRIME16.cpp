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
bool c[N];
ll d[N];
void snt(ll n)
{
	for (ll i=1;i<=n;i++)
	{
		c[i]=true;
		d[i]=0;
	}
	c[1]=false;
	for (ll i=2;i<=n;i++)
		if (c[i])
		{
			d[i]=d[i-1]+1;
			for(ll j=i*i;j<=n;j+=i) c[j]=false;
		}
		else d[i]=d[i-1];
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  snt(N);
  while(t--)
  {
      ll l,r;
      cin>>l>>r;
      cout<<d[r]-d[l-1]<<endl;
  }
  return 0;
}
