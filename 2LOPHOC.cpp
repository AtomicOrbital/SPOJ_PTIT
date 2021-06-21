#include<stdio.h>
#include<conio.h>
int main()
{
    long N,M,x;
    long long A[100005],B[100005];
    scanf("%ld%ld",&N,&M);
    for(long i=0;i<=100000;i++) A[i]=B[i]=0;
    for(long i=1;i<=N;i++)
    {
    scanf("%ld",&x);
    A[x]++;
    }
    for(long i=1;i<=M;i++)
    {
    scanf("%ld",&x);
    B[x]++;
    }
    long long K=0;
    for(long i=0;i<=100000;i++) K+=A[i]*B[i];
    printf("%lld",K);
}
