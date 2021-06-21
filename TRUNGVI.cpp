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
//P201PROB
long long res = 0;
long long s,n;
vector<long long> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>s;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    long long ans=0;
	ans+=abs(a[n/2]-s);
	for(int i=0;i<n/2;i++)
    {
		if(a[i]>s)
        {
			ans+=a[i]-s;
		}
	}
	for(int i=n/2+1;i<n;i++)
	{
		ans+=max(0LL,s-a[i]);
	}
	cout<<ans<<endl;
    return 0;
}
