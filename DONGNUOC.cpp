#include <iostream>
using namespace std;

int m, n;
int H[102][102];
void readInfo ()
{
	cin>>m>>n;
	for (int i=1; i<=m; i++)
	{
		for (int j=1; j<=n; j++)
		{
			cin>>H[i][j];
		}
	}
}

int H_Sp [102][102];
int Hmax;
int Sp_floor ()
{
	Hmax=0;
	for (int i=1; i<=m; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if (H[i][j]>Hmax) Hmax=H[i][j];
		}
	}

	if (Hmax==0) return -1;
	for (int i=1; i<=m; i++)
	{
		for (int j=1; j<=n; j++)
		{
			if (H[i][j]<1)
			{
				H_Sp[i][j]=0;
				if (H[i][j]!=0) H[i][j]--;
			}
			else
			{
				H_Sp[i][j]=1;
				if (H[i][j]!=0) H[i][j]--;
			}
		}
	}
	return 1;
}

int Xxq[]={-1, +0, +1, +0};
int Yxq[]={+0, +1, +0, -1};
void loang_broder (int i, int j)
{
	H_Sp[i][j]=1;
	for (int k=0; k<4; k++)
	{
		int X=j+Xxq[k];
		int Y=i+Yxq[k];
		if (Y>=1 && Y<=m && X>=1 && X<=n && H_Sp[Y][X]==0)
		{
			loang_broder (Y, X);
		}
	}
}

int main ()
{
	readInfo ();
	int dem=0;
	while (1)
	{
		if (Sp_floor ()==-1) break;
		//Loang_broder
		for (int i=1; i<=m; i++)
		{
			for (int j=1; j<=n; j++)
			{
				if (i==1 || i==m || j==1 || j==n)
				{
					if (H_Sp[i][j]==0)
					{
						loang_broder (i, j);
					}
				}
			}
		}
		//Cout water
		for (int i=1; i<=m; i++)
		{
			for (int j=1; j<=n; j++)
			{
				if (H_Sp[i][j]==0) dem++;
			}
		}
	}
	cout<<dem;
	return 0;
}
