#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define endl '\n'
#define mp make_pair
#define mt make_tuple
#define f first
#define pll pair<long long, long long>
#define s second
#define eb emplace_back
#define pii pair<int, int>
#define INF INT_MAX
#define LINF LLONG_MAX
#define all(vec) vec.begin(), vec.end()
#define FILEINPUT freopen("inputCNB.txt", "r", stdin);
#define FILEOUTPUT freopen("ouputCNB.txt", "w", stdout);
#define FOR(i, m, n) for(int i=(int)m; i<(int)n; i++)
#define FORD(i, m, n) for(int i=(int)m; i>=(int)n; i--)
#define FastIO cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define reset(A) memset(A, 0, sizeof(A))
#define sqr(a) (1.0)*(a)*(a)
const int MAXN = 1005;
const int LIM = 1e6 + 5;
const int mod = 1e9 + 7;
int A[MAXN][MAXN] = {};
int BIT[LIM] = {}, N;
void update_increment(int index){
	if(index <= 0) return;
	while(index <= N){
		BIT[index]++;
		index += index & -index;
	}
}
void update_decrement(int index){
	if(index <= 0) return;
	while(index <= N){
		BIT[index]--;
		index += index & -index;
	}
}
int get(int index){
	if(index == 0) return 0;
	int res = 0;
	while(index){
		res += BIT[index];
		index -= index & -index;
	}
	return res;
}
void solution(){
	int n, m, h, w;
	cin >> n >> m >> h >> w;
	N = n * m + 1;
	FOR(i, 1, n + 1) FOR(j, 1, m + 1) cin >> A[i][j];
	for(int i=1; i<=h-1; i++){
		for(int j=1; j<=w-1; j++){
			update_increment(A[i][j]);
		}
	}
	int check = 0, ans = INF;
	for(int i=h; i<=n; i++){
		if(check & 1){
			for(int k=m + 1; k>m-w+1; k--) update_increment(A[i][k]);
			for(int k=m + 1; k>m-w+1; k--) update_decrement(A[i - h][k]);
			for(int j=m-w+1; j>=0; j--){
				for(int row=i-h+1; row<=i; row++) update_increment(A[row][j]);
				for(int row=i-h+1; row<=i; row++) update_decrement(A[row][j + w]);
				int left = 1, right = N;
				while(left <= right){
					int mid = (left + right) >> 1;
					int get_less = get(mid - 1);
					int get_greater = get(N) - get(mid);

					if(get_less == get_greater){
						ans = min(ans, mid);
						break;
					}
					else if(get_less > get_greater){
						right = mid - 1;
					}
					else left = mid + 1;
				}
			}
		}
		else{
			for(int k=0; k<w; k++) update_increment(A[i][k]);
			for(int k=0; k<w; k++) update_decrement(A[i - h][k]);
			for(int j=w; j<=m + 1; j++){
				for(int row=i-h+1; row<=i; row++) update_increment(A[row][j]);
				for(int row=i-h+1; row<=i; row++) update_decrement(A[row][j - w]);
				int left = 1, right = N;
				while(left <= right){
					int mid = (left + right) >> 1;
					int get_less = get(mid - 1);
					int get_greater = get(N) - get(mid);
					if(get_less == get_greater){
						ans = min(ans, mid);
						break;
					}
					else if(get_less > get_greater){
						right = mid - 1;
					}
					else left = mid + 1;
				}
			}
		}
		check++;
	}
	cout << ans << endl;
}
int main()
{
	FastIO;
	int test = 1;
	while(test--) solution();
	return 0;
}
