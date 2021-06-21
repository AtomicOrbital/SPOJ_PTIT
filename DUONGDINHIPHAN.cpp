#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
char x16[]="0123456789ABCDEF";
class Ovuong
{

	int A[105][105];
	double C[105][105];
	int V[1005];
	public:
	int n;
	void xl();
	void trace();

};
void Ovuong::trace()
{
	int k=0;
	int i=n,j=n;
	while(i>=1 && j>=1)
	{
		V[k++]=A[i][j];
		if(i>1 && j>1)
		{
			if(C[i-1][j]>C[i][j-1]) i--;
			else j--;
		}
		else if(i==1) j--;
		else i--;
	}
	k--;
	while(k>0 && V[k]==0) k--;
	char kq[105];
	int v=0,u;
	{
		for(u=3;u<=k;u+=4) kq[v++]=x16[V[u-3]+2*V[u-2]+4*V[u-1]+8*V[u]];
		if(k+1==u)kq[v++]=x16[V[u-3]+2*V[u-2]+4*V[u-1]];
		else if(k+2==u)kq[v++]=x16[V[u-3]+2*V[u-2]];
		else if(k+3==u)kq[v++]=x16[V[u-3]];
	}
	for(int r=v-1;r>=0;r--)cout<<kq[r];

}
double maxx(double a,double b){return a>b?a:b;}
void Ovuong::xl()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++) cin>>A[i][j];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(i==1&&j==1) C[1][1]=A[1][1];
	else if(i==1) C[i][j]=C[i][j-1]*2+A[i][j];
	else if(j==1) C[i][j]=C[i-1][j]*2+A[i][j];
	else
	{
		C[i][j]=2*maxx(C[i][j-1],C[i-1][j])+A[i][j];
	}
}
int main()
{
	Ovuong O;
	O.xl();
	O.trace();
}
