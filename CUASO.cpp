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
int main()
{
    int n,m;
	cin>>m>>n;
	char a[600][600];
	for (int i=0;i<5*m+1;i++)
	{
		for (int j=0;j<5*n+1;j++)
		{
			cin>>a[i][j];
		}
	}
	int tt[]={0,0,0,0,0};
	int t=0;
	int dauI=1,dauJ=1;
	for (int i=0;i<m;i++)
	{
		if (i!=0) dauI+=5;
		dauJ=1;
		for (int j=0;j<n;j++)
		{
			if (j!=0) dauJ+=5;
			tt[0]++;
			for (int k=0;k<4;k++)
			{
				if (a[dauI+k][dauJ]=='*')
				{
					tt[k+1]++;
					tt[k]--;
				}
			}
		}
	}
	for (int i=0;i<5;i++) cout<<tt[i]<<" ";
	return 0;
}
