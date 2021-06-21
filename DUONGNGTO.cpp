#include<bits/stdc++.h>

#define lmao cout<<"\nLick My Ass onii-chann ~";
#define alpha "abcdefghijklmnopqrstuvwxyz"
#define ALPHA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int limit = 10004;
const int nmax = 1e5;
vi prime;
vi ke[nmax];
int a;
int b;
int T;
int dd[nmax]={0};
int dem[nmax] ={0};
void clear_arr(){
	for(int i=0;i<nmax;i++){
		dd[i] = 0;
		dem[i] = 0;
	}
}
void sangNT(){
	int check[limit] = {0};
	for(int i=2;i<=sqrt(limit);i++){
		if(check[i] == 0){
			for(int j=i*i;j<limit;j+=i){
				check[j]  = 1;
			}
		}
	}
	for(int i=1000;i<10000;i++){
		if(check[i] == 0){
			prime.pb(i);
		}
	}
}
bool check( int a , int b){
	string tmp1,tmp2;
	stringstream ss,sss;
	ss << a;
	ss >> tmp1;
	sss << b;
	sss >> tmp2;
	int dem = 0;
	for(int i=0;i<4;i++){
		if (tmp1[i] == tmp2[i]) dem++;
	}
	if (dem == 3) return true;
	return false;
}
void init_BFS(){
	for(int i=0;i<prime.size()-1;i++){
		for(int j=i+1;j<prime.size();j++){
			if (check(prime[i],prime[j])){
				ke[prime[i]].push_back(prime[j]);
				ke[prime[j]].push_back(prime[i]);
			}
		}
	}
}
void BFS(){
	queue<int> Q;
	Q.push(a);
	dd[a] = 1;
	while(!Q.empty()){
		int u = Q.front();
		Q.pop();
		for (int i=0;i<ke[u].size();i++){
			int v = ke[u][i];
			if( dd[v] == 0){
				Q.push(v);
				dd[v] = 1;
				dem[v] = dem[u]+1;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	sangNT();
	init_BFS();
	cin>>T;
	while(T--){
		cin>>a>>b;
		BFS();
		cout<<dem[b]<<endl;
		clear_arr();
	}
return 0;
}
