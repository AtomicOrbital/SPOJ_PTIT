#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
const double pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
long long n, m, t[100005], t_min;
long ok(long long A)
{
	long long d = 0;
	for ( long i = 1; i <= n; i++) d+=A/t[i];
	if (d >= m) return 1;
	return 0;
}
long long find()
{
	long long res;
	long long l = 1, r = t_min * m;
	long long mid;
	while(l <= r){
		mid = (l + r) / 2;
		if (ok(mid)){
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	cin>>n>>m;
	t_min = 1e9 + 1;
	for (int i = 1; i <= n; i++)
    {
		cin >> t[i];
		t_min = min(t[i], t_min);
	}
	cout<<find();
	return 0;
}
