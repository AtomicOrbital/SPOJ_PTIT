#include <iostream>
#include <string>
using namespace std;
int arr[15];
void StrToArr (string xau)
{
	for (int i=0; i<xau.length(); i++)
	{
		int tmp = xau[i]-'0';
		arr[i+1]=tmp;
	}
}
int check_Smtr (int arr[], int n)
{
	for (int i=1, j=n; i<=n, j>=1; i++, j--)
	{
		if (i>j) break;
		if (arr[i]!=arr[j]) return 0;
	}
	return 1;
}
int arr_Smtr[15];
void Find_Smtr (int arr[], int n)
{
	for (int i=1; i<=n; i++)
		arr_Smtr[i]=arr[i];

	while (1)
	{
		if (check_Smtr (arr_Smtr, n)==1) break;
		for (int i=1, j=n; i<=n, j>=1; i++, j--)
		{
			if (i>=j) break;
			if (arr_Smtr[i]>=arr_Smtr[j])
			{
				arr_Smtr[j] = arr_Smtr[i];
			}
			else
			{
				arr_Smtr[j] = arr_Smtr[i];
				int tmp = (arr_Smtr[j-1]+1)/10;
				arr_Smtr[j-1]++;
				if (arr_Smtr[j-1]>=10)
				{
					tmp = 1;
					arr_Smtr[j-1]%=10;
				}
				else
				{
					tmp = 0;
					arr_Smtr[j-1]%=10;
				}
				if (tmp!=0)
				{
					int k=j-1;
					while (tmp!=0)
					{
						arr_Smtr[k-1]++;
						if (arr_Smtr[k-1]>=10)
						{
							tmp = 1;
							arr_Smtr[k-1]%=10;
						}
						else
						{
							tmp = 0;
							arr_Smtr[k-1]%=10;
						}
						k--;
					}
				}
			}
		}
	}
}
long ArrToNum (int arr[], int n)
{
	long S=0;
	for (int i=1; i<=n; i++)
	{
		S+=arr[i];
		if (i!=n) S*=10;
	}
	return S;
}
int main ()
{
	string xau;
	while (1)
	{
		cin>>xau;
		if (xau=="0") break;
		StrToArr (xau);
		int n = xau.length();
		Find_Smtr (arr, n);
		long p1 = ArrToNum (arr, n);
		long p2 = ArrToNum (arr_Smtr, n);
		cout<<p2-p1<<endl;
	}
	return 0;
}
