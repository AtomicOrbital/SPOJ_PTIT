#include <iostream>
#include <algorithm>
#define Nmax 1000000
using namespace std;
struct data
{
	int cs;
	int gia;
};
int cmp (data a, data b)
{
	if (a.gia>b.gia) return 0;
	else if (a.gia==b.gia)
	{
		if (a.cs>b.cs) return 0;
	}
	return 1;
}
int cmp2 (data a, data b)
{
	if (a.cs>b.cs) return 0;
	return 1;
}
int cmp3 (data a, data b)
{
	if (a.cs<b.cs) return 0;
	return 1;
}
int main ()
{
	int n, k1, k2;
	struct data arr[Nmax];
	int t=0;
	while (1)
	{
		cin>>n>>k1>>k2;
		if (n==0 && k1==0 && k2==0) break;
		t++;
		for (int i=0; i<n; i++)
		{
			cin>>arr[i].gia;
			arr[i].cs=i+1;
		}
		sort (arr, arr+n, cmp);
		sort (arr, arr+k1, cmp2);
		sort (arr+(n-k2), arr+n, cmp3);
		cout<<"Case "<<t<<endl;
		for (int i=0; i<k1; i++)
		{
			cout<<arr[i].cs<<" ";
		}
		cout<<endl;
		for (int i=n-k2; i<n; i++)
		{
			cout<<arr[i].cs<<" ";
		}
		cout<<endl;
	}
	return 0;
}
