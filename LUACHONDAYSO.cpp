#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n,m;
	cin>>n>>m;
	int arr[55];
	for (int i=1;i<=m;i++) cin>>arr[i];
	sort(arr+1,arr+m+1);
	int hieu=2000;
	for (int i=1;i<=m-n+1;i++)
	{
		if (arr[i+n-1]-arr[i]<hieu)
		{
			hieu=arr[i+n-1]-arr[i];
		}
	}
	cout<<hieu;
	return 0;
}
