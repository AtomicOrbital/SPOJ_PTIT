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
ll a[N];
int main()
{
    ll n;
    cin>>n;
	ll i=-1;
	while(true)
	{
		cin>>a[++i];
		if (a[i]==n) break;
	}
	for (int j=i;j>=0;j--)
	{
		if (a[j]==n) n--;
	}
	cout<<n;
}
