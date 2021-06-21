#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int main()
{
    long a[1000];
	int n;
	cin>>n;
	while(n!=0)
	{
		for(int i=0;i<n;i++) cin>>a[i];
		int i=0;
		int count;
		while(1)
		{
			int e=0;
			count=0;
			while(e<n-1)
			{
				if (a[e]==a[e + 1])
				{
					count++;
					e++;
				}
				else break;
			}
			if ((count==n-1)||i==1000) break;
			else i++;
			a[n]=a[0];
			for (int j=0;j<n;j++)
			{
				a[j]=abs(a[j]-a[j+1]);
			}
		}
		if (i==1000) cout<<-1<<endl;
		else if(count==n-1) cout<<i<<endl;
		cin>>n;
	}
}
