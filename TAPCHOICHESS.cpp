#include <iostream>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;
vector <int> dinh[102];
int dd[102];
int buoc[102];
vector <int> Xe[102];
vector <int> Vua[102];
vector <int> Tinh[102];
int xx[]={+0, -1, -1, -1, +0, 1, 1, +1};
int yy[]={-1, -1, +0, +1, +1, 1, 0, -1};
void khoitaoKN ()
{
	int dem=0;
	for (int i=0; i<8; i++)
	{
		for (int j=0; j<8; j++)
		{
			dem++;
			dinh[i].push_back(dem);
		}
	}
	for (int i=0; i<8; i++)
	{
		for (int j=0; j<8; j++)
		{
			//For Xe;
			for (int k=0; k<8; k++)
			{
				if (k!=j) Xe[dinh[i][j]].push_back(dinh[i][k]);
				if (k!=i) Xe[dinh[i][j]].push_back(dinh[k][j]);
			}

			//For tinh;
			int min1=min (7-i, 7-j);
			for (int k=1; k<=min1; k++) Tinh[dinh[i][j]].push_back(dinh[i+k][j+k]);
			int min2=min (i-0, 7-j);
			for (int k=1; k<=min2; k++) Tinh[dinh[i][j]].push_back(dinh[i-k][j+k]);
			int min3=min (i-0, j-0);
			for (int k=1; k<=min3; k++) Tinh[dinh[i][j]].push_back(dinh[i-k][j-k]);
			int min4=min (7-i, j-0);
			for (int k=1; k<=min4; k++) Tinh[dinh[i][j]].push_back(dinh[i+k][j-k]);
			//For Hau;
			for (int k=0; k<8; k++)
			{
				int X=j+xx[k];
				int Y=i+yy[k];
				if (X>=0 && X<=7 && Y>=0 && Y<=7) Vua[dinh[i][j]].push_back(dinh[Y][X]);
			}
		}
	}
}
void reset ()
{
	for (int i=0; i<=99; i++)
	{
		dd[i]=0;
		buoc[i]=0;
	}
}
void BFS (int u, vector <int> XTV[])
{
	queue <int> Q;
	Q.push (u);
	dd[u]=1;
	buoc[u]=0;
	while (!Q.empty ())
	{
		int x = Q.front ();
		Q.pop();
		for (int i=0; i<XTV[x].size(); i++)
		{
			int next=XTV[x][i];
			if (dd[next]==0)
			{
				Q.push (next);
				dd[next]=1;
				buoc[next]=buoc[x]+1;
			}
		}
	}
}
int main ()
{
	int r1, c1, r2, c2;
	cin>>r1>>c1>>r2>>c2;
	khoitaoKN ();
	reset ();
	BFS (dinh[r1-1][c1-1], Xe);
	if (buoc[dinh[r2-1][c2-1]]!=0) cout<<buoc[dinh[r2-1][c2-1]]<<" ";
	else cout<<"0 ";
	reset ();
	BFS (dinh[r1-1][c1-1], Tinh);
	if (buoc[dinh[r2-1][c2-1]]!=0) cout<<buoc[dinh[r2-1][c2-1]]<<" ";
	else cout<<"0 ";
	reset ();
	BFS (dinh[r1-1][c1-1], Vua);
	if (buoc[dinh[r2-1][c2-1]]!=0) cout<<buoc[dinh[r2-1][c2-1]];
	else cout<<"0";
	return 0;
}
