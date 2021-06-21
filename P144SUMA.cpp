#include <iostream>
using namespace std;
long a[100001];
long b[100001];
int main()
{
	long n,p=0,count=1,sum=0;
	cin>>n;
	for (long i=0;i<n;i++) cin>>a[i];
	for (long i=0;i<n;i++)
	{
		if (a[i]==a[i+1]) count=1;
		else
		{
				b[p]=count;
				p++;
			    count=1;
		}
	}
	for (long i=0;i<p;i++) sum+=b[i];
	if (sum==n-1) cout<<sum+1<<endl;
	else cout<<sum<<endl;
	return 0;
}
