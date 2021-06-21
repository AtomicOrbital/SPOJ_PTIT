#include<bits/stdc++.h>
using namespace std;
struct data
{
	int x,y;
} typedef toado;
int main ()
{
	long long n,j;
	cin>>n>>j;
	toado M0;
	cin>>M0.x>>M0.y;
	toado A[200005];
	for (int i=1;i<=n;i++)
	{
		cin>>A[i].x>>A[i].y;
		A[n+i].x=A[i].x;
		A[n+i].y=A[i].y;
	}
	if (j%(2*n)==0) cout<<M0.x<<" "<<M0.y;
	else
	{
		j=j%(2*n);
		toado M_j;
		for (int i=1;i<=j;i++)
		{
			M_j.x=2*A[i].x-M0.x;
			M_j.y=2*A[i].y-M0.y;
			M0.x=M_j.x;
			M0.y=M_j.y;
		}
		cout<<M_j.x<<" "<<M_j.y;
	}
	return 0;
}
