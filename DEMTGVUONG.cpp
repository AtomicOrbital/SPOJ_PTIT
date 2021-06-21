#include<stdio.h>
long long X[100005],Y[100005],N,x[100005],y[100005],d=0;
int main()
{
    for(long i=1;i<=100000;i++) X[i]=Y[i]=-1;
    scanf("%lld",&N);
    for(long i=1;i<=N;i++)
    {
    scanf("%lld%lld",&x[i],&y[i]);
    X[x[i]]++;
    Y[y[i]]++;
    }
    for(long i=1;i<=N;i++)
    d+=X[x[i]]*Y[y[i]];
    printf("%lld",d);
}
