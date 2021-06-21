#include<stdio.h>
#include<string.h>
int main()
{
    char x[100007];
    long A[100007],B[100007],n,i,d=0;
    scanf("%s",x+1);
    n=strlen(x+1);
    A[0]=0;
    for(i=1;i<=n;i++) A[i]=A[i-1]+(x[i]=='('?1:-1);
    if(A[n]!=2&&A[n]!=-2) {printf("0");return 0;}
    B[n]=A[n];
    for(i=n-1;i>=1;i--) if(A[i]<B[i+1]) B[i]=A[i];else B[i]=B[i+1];
    char c=A[n]>0?'(':')';
    long u=(c=='(')?1:-1;
    for(i=1;i<=n;i++)
    if(x[i]==c)
    {
    if(A[i-1]-u>=0 && B[i+1]-2*u>=0) d++;
    if(A[i]<0) break;
    }
    printf("%ld",d);
}
