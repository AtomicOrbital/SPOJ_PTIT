#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[1003];
	arr[1]=1;
	arr[2]=2;
	int t;
	cin>>t;
	int n;
	for (int i=1;i<=t;i++)
	{
		cin>>n;
		for(int j=3;j<=n;j++)
		{
			int S=1;
			for (int k=1;k<=j/2;k++)
			{
				S+=arr[k];
			}
			arr[j]=S;
		}
		cout<<i<<" "<<arr[n]<<endl;
	}
	return 0;
}
