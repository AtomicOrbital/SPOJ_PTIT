#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int tcs(int n)
{
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n/=10;
	}
	if(s%10==0) return 1;
	return 0;
}
int tn(int n)
{
	int m=n,s=0;
	while(n!=0)
	{
		int res=n%10;
		if(res==4) return 0;
		s=s*10+res;
		n/=10;
	}
	if(s==m) return 1;
	return 0;
}
void xuly()
{
	int n;
	scanf("%d",&n);
	int a1=pow(10,n-1),a2=pow(10,n);
	for(int i=a1;i<a2;i++)
	{
		if(tcs(i)&&tn(i)) printf("%d ",i);
	}
	printf("\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

