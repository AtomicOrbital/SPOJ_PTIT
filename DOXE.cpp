#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int a[100],b[1000],count=0,sum =0;
	int x,y,z;
	cin>>x>>y>>z;
	for (int i=0;i<6;i++) cin>>a[i];
	for (int i=a[0];i<a[1];i++)
	{
		b[count]=i;
		count++;
	}
	for (int i=a[2];i<a[3];i++)
	{
		b[count]=i;
		count++;
	}
	for (int i=a[4];i<a[5];i++)
	{
		b[count]=i;
		count++;
	}
	int maxn=*std::max_element(b,b+count);
	int minn=*std::min_element(b,b+count);
	for (int i=minn;i<=maxn;i++)
	{
		int tg=0;
		for (int j=0;j<count;j++)
		{
			if (b[j]==i) tg++;
		}
		if (tg==1) sum+=x;
		else if(tg==2) sum+=y*2;
		else if(tg==3) sum+=z*3;
	}
	cout<<sum<<endl;
	return 0;
}
