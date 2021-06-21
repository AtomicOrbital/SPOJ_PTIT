#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int main()
{
  int n,dem1=0,dem2=0;
  scanf("%d",&n);
  int a[n+5],b[n+5];
  for(int i=1;i<=n-1;i++) scanf("%d%d",&a[i],&b[i]);
  for(int i=2;i<=n-1;i++)
  {
  	 if(a[i]!=a[1]&&b[i]!=a[1]) dem1++;
  }
  for(int i=2;i<=n-1;i++)
  {
  	if(a[i]!=b[1]&&b[i]!=b[1]) dem2++;
  }
  if(dem1>=1&&dem2>=1) printf("No");
  else printf("Yes");
  return 0;
}

