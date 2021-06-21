#include<stdio.h>
long abss(long x){return x>0?x:-x;}
long n;
long long A,T,x;
void onetest()
{
    A=0;
    T=0;
    scanf("%ld",&n);
    if(n==0) return;
    for(long i=1;i<=n;i++)
    {
    T=T+abss(A);
    scanf("%ld",&x);
    A=A+x;
    }
    printf("%lld\n",T);
    onetest();
    }
    int main()
    {
    onetest();
}
