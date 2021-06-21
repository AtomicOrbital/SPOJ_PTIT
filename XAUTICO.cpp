#include<stdio.h>
int main()
{
    int n;
    long long K[100];
    scanf("%d",&n);
    K[0]=1;
    for(int i=1;i<=n;i++)
    if(i<4) K[i]=4*K[i-1];
    else K[i]=4*K[i-1]-K[i-4];
    printf("%lld",K[n]);
}
