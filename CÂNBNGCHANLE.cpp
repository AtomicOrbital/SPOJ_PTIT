#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
int cl(ll n)
{
	if(n%2==0) return 0;
	int dc=0,dl=0;
	while(n!=0)
	{
		int res=n%10;
		if(res%2==0) dc++;
		else dl++;
		n/=10;
	}
	if(dc<dl) return 1;
	return 0;
}
void xuly()
{
	ll n;
	scanf("%lld",&n);
	if(cl(n)) printf("YES\n");
	else printf("NO\n");
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--) xuly();
  return 0;
}

