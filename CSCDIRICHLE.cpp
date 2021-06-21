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
	for (long long i=1;i<=n;i++)
	{
		c[i]=true;
		d[i]=0;
	}
	c[1]=false;
	for (long long i=2;i<=n;i++)
		if (c[i])
		{
			d[i]=d[i-1]+1;
			long long j=i*i;
			while (j<=n)
			{
				if(c[j]) c[j]=false;
				j=j+i;
			}
		}
		else d[i]=d[i-1];
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll a,b,l,u;
  snt(N);
  ll i=1;
  while(cin>>a)
  {
      if(a==0) break;
      cin>>b>>l>>u;
      cout<<"Case "<<i<<": ";
      ll ans1=a*l+b,ans2=a*u+b;
      cout<<d[ans2]-d[ans1-1]<<endl;
      i++;
  }
}
