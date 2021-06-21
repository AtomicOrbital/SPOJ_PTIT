#include <stdio.h>
bool KT(long long x, long long y)
{
    if(x==y) return 0;
    if(x>=2*y ||x%y== 0) return 1;
    return not KT(y,x-y);
}
int main()
{
    long long x,y,t;
    do
    {
    scanf("%lld%lld",&x,&y);
    if(x==0 && y==0) break;
    if(x<y) {t=x;x=y;y=t;}
    if(KT(x,y)) printf("T\n"); else printf("S\n");
    }while(1);
}
