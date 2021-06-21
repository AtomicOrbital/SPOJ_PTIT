#include <iostream>
#include <vector>
using namespace std;
int arr[10];
long long N;
long long Value[10],n,k;
void read ()
{
	cin>>N;
	for (int i=1;i<=5;i++) cin>>Value[i];
}
vector <long long> v[10];
void tinh()
{
	long long S=1;
	int count1=0;
	for (int i=1;i<=n;i++)
	{
		if (arr[i]==1)
		{
			count1++;
			S*=Value[i];
		}
	}
	if (count1!=0)
	{
		long long tmp=N/S;
		v[count1].push_back(tmp);
	}
}
void sinhNP(int u)
{
	if (u>n)
	{
		tinh ();
	}
	else
	{
		for (int i=0;i<=1;i++)
		{
			arr[u]=i;
			sinhNP(u+1);
		}
	}
}
int main ()
{
	int t;
	cin>>t;
	while(1)
	{
		if (t==0) break;
		t--;
		read();
		n=5;
		sinhNP(1);
		long long SUM=0;
		for (int i=1;i<=5;i++)
		{
			for (int j=0;j<v[i].size();j++)
			{
				if (i%2!=0) SUM+=v[i][j];
				else SUM-=v[i][j];
			}
		}
		cout<<N-SUM<<endl;
		for (int i=1; i<=5; i++)
			v[i].clear();
	}
	return 0;
}
