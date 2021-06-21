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
#define FILEINPUT freopen("inputCNB.txt", "r", stdin);
#define FILEOUTPUT freopen("ouputCNB.txt", "w", stdout);
#define FOR(i, m, n) for(int i=m; i<n; i++)
#define FORD(i, m, n) for(int i=m; i>=n; i--)
#define FastIO cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define reset(A) memset(A, 0, sizeof(A))
#define debug cerr << "debug: "
const int MAXN = 1e3 + 5;
const ll mod = (ll)1e9 + 7;
const double N = (double)0.000000000005;
int n;
vector<double> A;
double calc(double x){

	vector<double> F(n + 5);
	FOR(i, 1, n + 1) F[i] = (double)A[i] - x;
	vector<double> F1(n + 5, F[0]), F2(n + 5, F[0]);
	double MAX = F[0], MIN = F[0];
	FOR(i, 1, n + 1) F1[i] = max(F1[i - 1] + F[i], F[i]), MAX = max(MAX, F1[i]);
	FOR(i, 1, n + 1) F2[i] = min(F2[i - 1] + F[i], F[i]), MIN = min(MIN, F2[i]);
	return max(abs(MAX), abs(MIN));
}
double binCalc(double low, double high)
{
	double left = low, right = high;
	while(right-left>= N)
    {
		double mid = (left + right) / 2;
		double d1=calc(mid-N);
		double d2=calc(mid+N);
		if(d1>d2) left = mid;
		else right=mid;

	}
	return min(calc(left), calc(right));

}
void solution()
{
	cin >> n;
	A.clear();
	A.resize(n + 5);
	FOR(i, 1, n + 1) cin >> A[i];
	double low = A[1], high = A[1];
	FOR(i, 1, n + 1) low = min(low, (double)A[i]), high = max(high, (double)A[i]);
	cout << setprecision(6) << fixed << binCalc(low, high) << endl;

}
int main()
{
	int test = 1;
	while(test--) solution();
	return 0;
}
