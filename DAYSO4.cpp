#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	while(1)
	{
		cin>>k;
		if (k==0) break;
		int a[50];
		for(int i=1;i<=k;i++) cin>>a[i];
		for(int i=1;i<=k;i++)
		{
			if(i==1)
			{
				for(int j=1;j<=arr[i];j++)
					cout<<"1 ";
			}
			else
			{
				if (arr[i]>arr[i-1])
				{
					for (int j=1;j<=arr[i]-arr[i-1];j++)
					{
						cout<<i<<" ";
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
