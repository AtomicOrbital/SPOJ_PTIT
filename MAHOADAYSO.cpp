#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct data
{
	long long GT;
	int sl;
	int bd;
};
int cmp(data a,data b)
{
	if(a.sl<b.sl) return 0;
	else if(a.sl==b.sl)
	{
		if(a.bd>b.bd) return 0;
	}
	return 1;
}
int main ()
{
	int N;
	long long C;
	cin>>N>>C;
	struct vector<data> V;
	struct data tg;
	for (int i=1;i<=N;i++)
	{
		cin>>tg.GT;
		int kt=0;
		for (int j=0;j<V.size();j++)
		{
			if (V[j].GT==tg.GT)
			{
				kt=1;
				V[j].sl++;
				break;
			}
		}
		if (kt==0)
		{
			tg.sl=1;
			tg.bd=i;
			V.push_back(tg);
		}
	}
	sort(V.begin(),V.end(),cmp);
	for (int i=0; i<V.size();i++)
	{
		for (int j=0;j<V[i].sl;j++)
		{
			cout<<V[i].GT<<" ";
		}
	}
	return 0;
}
