#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=123456*2+3;
const int MOD=1e9+7;
int n,nmax=123456*2+1;
bool c[123456*2+1];
long long d[123456*2+1];
void snt(int n)
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
	cin >> n;
	snt(nmax);
	while(n!=0)
	{
		long long dem;
		dem=d[2*n]-d[n];
		cout <<dem<<endl;
		cin>>n;
	}
}
