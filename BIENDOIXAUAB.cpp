#include<stdio.h>
int main()
{
    char x[1000006];
    long n;
    scanf("%ld%s",&n,&x);
    long a=0,b=0;
    for(long i=1;i<=n;i++)
    {
        if(x[i]=='A') b=1+(a<b?a:b);
        else a=1+(a<b?a:b);
    }
    printf("%ld",a);
}
