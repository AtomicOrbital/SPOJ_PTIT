#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define endl '\n'
#define mp make_pair
#define mt make_tuple
#define f first
#define s second
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define INF INT_MAX
#define LINF LLONG_MAX
#define all(vec) vec.begin(), vec.end()
#define FOR(i, m, n) for(int i=(int)m; i<(int)n; i++)
#define FORD(i, m, n) for(int i=(int)m; i>=(int)n; i--)
#define FastIO cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define reset(A) memset(A, 0, sizeof(A))
#define debug cerr << "debug: "
const int MAXN = 1e5 + 5;
const ll mod = (ll)1e9 + 7;
int n, k;
vector<ll> C;
vector<ll> Left, Right;
ll myPow(ll a, ll b)
{
	if(b == 1) return a % mod;
	if(b & 1) return (myPow(a, b - 1) % mod * a) % mod;
	ll val = myPow(a, b >> 1) % mod;
	return (val % mod * val) % mod;
}
void prepare()
{
	C[k - 1] = 1;
	FOR(i, k, n + 1){
		C[i] = ((i * C[i - 1]) % mod * myPow(i - k + 1, mod - 2)) % mod;
	}
}
void solution()
{
	cin >> n >> k;
	C.resize(n + 1);
	prepare();
	vector<int> A(n);
	FOR(i, 0, n) cin >> A[i];
	sort(all(A));
	Left.clear(); Right.clear();
	Left.resize(n);
	Right.resize(n);
	ll ans1 = 0, ans2 = 0;
	FOR(i, 0, n){
		Left[i] = C[i];
		Right[i] = C[n-i-1];
	}
	FOR(i, 0, n) ans1 = (ans1 + A[i] * Left[i]) % mod;
	FOR(i, 0, n) ans2 = (ans2 + A[i] * Right[i]) % mod;
	cout << (ans1 - ans2 + mod) % mod << endl;
}
int main()
{
	int test=1;
	while(test--) solution();
	return 0;
}
