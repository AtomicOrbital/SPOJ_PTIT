#include<bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define mp make_pair
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int,int> pii;
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
const int maxxn = 1e5+5;
int p[maxxn],a[maxxn],b[maxxn];
int fi[maxxn],se[maxxn],th[maxxn];
int n,maxx,maxx1,maxx2,maxx3;
int m,k,j,key;
void clear_all()
{
	for(int i =1 ; i <= maxx1;i++){
		p[i] = 0;
		b[i] = 0;
		fi[i] = 0;
		se[i] = 0;
		th[i] = 0;
	}
	maxx=0;
	maxx1=0;
	maxx2=0;
	maxx3=0;
	k=0;
	j=1;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	while( 1 )
    {
		clear_all();
		cin>>n;
		if(n == 0){
			break;
		}
		while(n > 0)
		{
			cin>>m;
			for(int i = 1;i <= m; i++)
			{
				cin>>a[i];
				if(i == 1)
				{
					p[a[i]]+=3;
					fi[a[i]]++;
				}
				if(i == 2){
					p[a[i]]+=2;
					se[a[i]]++;
				}
				if(i == 3)
				{
					p[a[i]]++;
					th[a[i]]++;
				}
				if(p[a[i]] > maxx)
				{
					maxx = p[a[i]];
				}
				if(a[i] > maxx1)
				{
					maxx1=a[i];
				}
			}
			n--;
		}
		for(int i = 1; i <= maxx1;i++)
		{
			if(p[i] == maxx)
			{
				b[j]=i;
				j++;
				k++;
			}
		}
		if(k == 1){
			cout<<b[1];
		}
		if(k > 1)
		{
			k=0;
			maxx=0;
			for(int i = 1;i < j;i++)
			{
				if(fi[b[i]] >= maxx)
				{
					maxx = fi[b[i]];
				}
			}
			for(int i = 1;i < j; i++)
			{
				if(fi[b[i]] == maxx)
				{
					key = b[i];
					k++;
				}
			}
			if(k == 1)
			{
				cout<<key;
			}
			if(k > 1)
			{
				k=0;
				for(int i = 1;i < j;i++)
				{
					if(fi[b[i]] == maxx && se[b[i]] >= maxx2){
						maxx2 = se[b[i]];
					}
				}
				for(int i = 1;i < j; i++)
				{
					if(se[b[i]] == maxx2 && fi[b[i]] == maxx){
						key = b[i];
						k++;
					}
				}
				if(k == 1)
				{
					cout<<key;
				}
				if(k > 1)
				{
					for(int i = 1;i < j;i++)
					{
						if(fi[b[i]] == maxx && se[b[i]] == maxx2 && th[b[i]] >= maxx3){
							maxx3 = th[b[i]];
						}
					}
					for(int i = 1;i < j; i++)
					{
					{
						if(se[b[i]] == maxx2 && fi[b[i]] == maxx && th[b[i]] == maxx3){
							cout<<b[i]<<" ";
						}
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
