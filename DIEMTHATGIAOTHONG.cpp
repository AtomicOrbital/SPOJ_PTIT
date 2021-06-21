#include<bits/stdc++.h>
#include<vector>
using namespace std;
int N,M,u,v;
vector<int>road[102];
void read()
{
	cin>>N>>M>>u>>v;
	for (int i=1;i<=M;i++)
	{
		int A,B;
		cin>>A>>B;
		road[A].push_back(B);
	}
}
int check[102],mark[102];
void init()
{
	for (int i=1;i<=N;i++)
	{
		check[i]=0;
		mark[i]=1;
	}
}
void find_similar()
{
	for (int i=1;i<=N;i++)
	{
		if (check[i]==1&&mark[i]==1)
		{
			mark[i]=1;
		}
		else mark[i]=0;
	}
}
void DQ_QL(int r,int End)
{
	if(r==End)
	{
		find_similar();
	}
	else
	{
		for(int i=0;i<road[r].size();i++)
		{
			int v=road[r][i];
			if (check[v]==0)
			{
				check[v]=1;
				DQ_QL (v, End);
				check[v]=0;
			}
		}
	}
}
int main ()
{
	int t;
	cin>>t;
	while (1)
	{
		if (t==0) break;
		t--;
		read ();
		init ();
		check[u]=1;
		DQ_QL (u, v);
		check[u]=0;
		int count = 0;
		for (int i=1;i<=N;i++)
		{
			if (i!=u&&i!=v&&mark[i]==1) count++;
		}
		cout<<count<<endl;
		for (int i=1;i<=100;i++) road[i].clear();
	}
	return 0;
}
