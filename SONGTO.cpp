#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
bool ngto(ll n)
{
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
  ll n;
  scanf("%lld",&n);
  for(int q=2;q<=63;q++)
  {
      ll p=round(exp(log(n)/q));
      ll ans=1;
      for(int i=1;i<=q;i++) ans*=p;
      if(ans==n&&ngto(p))
      {
          printf("%lld %d",p,q);
          return 0;
      }
  }
  printf("0");
  return 0;
}
