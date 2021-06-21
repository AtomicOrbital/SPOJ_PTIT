#include<bits/stdc++.h>
using namespace std;
int chuaxet[10004];
void khoitao ()
{
	for (int i=1; i<=10000; i++)
	{
		chuaxet[i]=1;
	}
}
char grass[102][102];
int dinh[102][102];
int R, C;
void nhap ()
{
	int stt=0;
	cin>>R>>C;
	for (int i=1; i<=R; i++)
	{
		for (int j=1; j<=C; j++)
		{
			cin>>grass[i][j];
			stt++;
			dinh[i][j]=stt;
		}
	}
}
int xqX[]={0, -1, 0, 1};
int xqY[]={1, 0, -1, 0};
void DFS_RA (int r, int c)
{
	for (int i=0; i<4; i++)
	{
		int X=c+xqX[i];
		int Y=r+xqY[i];
		if ((X>=1 && X<=C) && (Y>=1 && Y<=R) && chuaxet[dinh[Y][X]]==1 && grass[Y][X]=='#')
		{
			chuaxet[dinh[Y][X]]=0;
			DFS_RA (Y, X);
		}
	}
}
int main ()
{
	nhap ();
	khoitao();
	int dem=0;
	for (int i=1; i<=R; i++)
	{
		for (int j=1; j<=C; j++)
		{
			if (grass[i][j]=='#' && chuaxet[dinh[i][j]]==1)
			{
				dem++;
				chuaxet[dinh[i][j]]=0;
				DFS_RA (i, j);
			}
		}
	}
	cout<<dem;
	return 0;
}
