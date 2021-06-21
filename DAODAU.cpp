#include<bits/stdc++.h>
#include<string>
#include<vector>
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define FORD(i,m,n) for(int i=m;i>=n;i--)
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
ll a[N];
void xuly()
{
    ll n,k;
	cin>>n>>k;
	vector<ll>A(n);
	ll sum=0;
	bool check=false;
	int cnt=0;
	FOR(i,0,n)
	{
		cin>>A[i];
		if(A[i]<0) cnt++;
		if(A[i]==0) check=true;
	}
	sort(A.begin(),A.end());
	if(k==cnt)
    {
		FOR(i,0,n) sum+=abs(A[i]);
	}
	else if(k<cnt)
	{
		FOR(i,0,k) sum+=abs(A[i]);
		FOR(i,k,n) sum+=A[i];
	}
	else
	{
		if(check) FOR(i,0,n) sum+=abs(A[i]);
		else
		{
			int dis=k-cnt;
			ll MIN=1e9;
			FOR(i,0,n) sum+=abs(A[i]),MIN=min(MIN,abs(A[i]));
			if(dis&1) sum-=2*MIN;
		}
	}
	cout<<sum<<endl;
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
