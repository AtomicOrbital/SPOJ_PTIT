#include <iostream>
#include <algorithm>
using namespace std;
struct data
{
	long long sum;
	long long sale;
} typedef data;

int cmp (data a, data b)
{
	if (a.sum>b.sum) return 0;
	return 1;
}
int main ()
{
	int n;
	long long S;
	cin>>n>>S;
	data cow[1003];
	long long a, b;
	for (int i=1; i<=n; i++)
	{
		cin>>a>>b;
		cow[i].sum=a+b;
		cow[i].sale=(a+b)-((a/2)+b);
	}
	sort (cow+1, cow+n+1, cmp);
	int dem=0;
	for (int i=1; i<=n; i++)
	{
		if (S>=cow[i].sum)
		{
			dem++;
			S-=cow[i].sum;
		}
		else
		{
			long long SaleMax=cow[i].sale;
			for (int j=i; j>=1; j--)
			{
				if (cow[j].sale>SaleMax) SaleMax=cow[j].sale;
			}
			S+=SaleMax;
			if (S>=cow[i].sum)
			{
				dem++;
				S-=cow[i].sum;
			}
			else break;
		}
	}
	cout<<dem;
	return 0;
}
