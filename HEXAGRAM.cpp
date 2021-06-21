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
const int MAXN = 2005 + 5;
const int mod = 1e9 + 7;
ll sub;
ll A[15],B[15];
bool stop=false;
map<string,bool>cts;
bool check(ll A[]){
	ll val1 = A[0] + A[2] + A[5] + A[7];
	ll val2 = A[0] + A[3] + A[6] + A[10];
	ll val3 = A[7] + A[8] + A[9] + A[10];
	ll val4 = A[1] + A[5] + A[8] + A[11];
	ll val5 = A[4] + A[6] + A[9] + A[11];
	ll val6 = A[1] + A[2] + A[3] + A[4];
	return val1 == sub && val2 == sub && val3 == sub
	&& val4 == sub && val5 == sub && val6 == sub;
}
const int N = 12;
bool vis[15] = {};
ll ans = 0;
void backTrack(int index){
	if(index > 4){
		if(B[1] + B[2] + B[3] + B[4] != sub) return;
	}
	if(index > 7){
		if(B[0] + B[2] + B[5] + B[7] != sub) return;
	}
	if(index > 10){
		ll val2 = B[0] + B[3] + B[6] + B[10];
		if(val2 != sub) return;
	}
	FOR(i, 0, N){
		if(vis[i]) continue;
		vis[i] = true;
		B[index] = A[i];
		if(index == N - 1){
			if(check(B)){
				ans++;
			}
		}
		else backTrack(index+1);
		vis[i]=false;
	}
}
int main()
{
    ll a1,b,c,d,e,f,g,h,i,j,k,l;
	while(cin>>a1>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l)
    {
		if(a1==0&&b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0) break;
		cts.clear();
        ll Sum=0;
        ans=0;
        A[0]=a1;A[1]=b;A[2]=c;A[3]=d;A[4]=e;
        A[5]=f;A[6]=g;A[7]=h;A[8]=i;A[9]=j;A[10]=k;A[11]=l;
        FOR(i,0,N) Sum+=A[i];
        Sum<<=1LL;
        if(Sum%6)
        {
            cout<<0<<endl;
            continue;
        }
        sub=Sum/6;
        backTrack(0);
        cout<<(ll)ans/12LL<<endl;
    }
	return 0;
}
