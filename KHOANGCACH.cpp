#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
void xuly()
{
	double x1,y1,x2,y2;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	double ans=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("%.4lf\n",ans);
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

