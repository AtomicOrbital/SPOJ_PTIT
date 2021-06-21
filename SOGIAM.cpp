#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int giam(int n)
{
	int a=n%10;
	n/=10;
	while(n!=0)
	{
		int b=n%10;
		if(b<=a) return 0;
		n/=10;
		a=b;
	}
	return 1;
}
void xuly()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int dem=0;
	for(int i=a;i<=b;i++)
	{
		if(giam(i)) dem++;
	}
	printf("%d\n",dem);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

