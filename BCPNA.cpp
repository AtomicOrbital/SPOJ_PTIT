#include<bits/stdc++.h>
using namespace std;
int ngto(int a)
{
	if (a<2) return 0;
	for (int i=2;i<=sqrt(a);i++) if (a%i==0) return 0;
	return 1;
}
int main ()
{
	int t;
	cin>>t;
	int n;
	for(int k=1;k<=t;k++)
	{
		cin>>n;
		int d=0;
		if (ngto(n)) d++;
		int tg=0;
		for (int i=2;i<=n/2;i++)
		{
			tg=0;
			if (ngto(i))
			{
				for (int j=i;j<=n;j++)
				{
					if (ngto(j))
					{
						tg+=j;
						if(tg==n) d++;
						if(tg>n) break;
					}
				}
			}
		}
		cout<<d<<endl;
	}
	return 0;
}
