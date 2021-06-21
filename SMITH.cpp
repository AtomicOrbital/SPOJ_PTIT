#include<stdio.h>
#include<math.h>
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll ngto(ll n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
ll tcs(ll n)
{
    ll s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
ll uoc(ll n)
{
    ll res=0;
	for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            res+=tcs(i);
            n/=i;
        }
    }
    if(n>1) res+=tcs(n);
    return res;
}
int main()
{
    ll n;
    scanf("%lld",&n);
    if(ngto(n)) printf("NO\n");
    else
    {
       if(tcs(n)==uoc(n)) printf("YES\n");
       else printf("NO\n");
    }
  return 0;
}
