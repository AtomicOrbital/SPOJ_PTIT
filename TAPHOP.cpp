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
ll n,k,s;
void ngocanh(ll x,ll d,ll S)
{
	if (S>s) return;
	if (d==0)
	{
		if (S==s) dem++;
	}
	else
	{
		for (int i=x+1;i<=n;i++)
		{
			ngocanh(i,d-1,S+i);
		}
	}
}
int main ()
{
	while (1)
	{
		cin>>n>>k>>s;
		if (n==0&&k==0&&s==0) break;
		dem=0;
		ngocanh(0,k,0);
		cout<<dem<<endl;
	}
	return 0;
}
