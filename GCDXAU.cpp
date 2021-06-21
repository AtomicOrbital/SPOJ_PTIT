#include<stdio.h>
int gcd(int a, int b)
{
    if (b==0)return a;
    return gcd(b,a%b);
}
int My_mod(char *x,int p)
{
    int q=0;
    for(;*x;x++) q=(q*10+*x-'0')%p;
    return q;
}
int main()
{
    int n;
    int A,B;
    char x[300];
    scanf("%d",&n);
    for(;n>0;n--)
    {
    scanf("%ld%s",&A,x);
    if(A==1) {printf("%d\n",A); continue;}
    if(A==0) {printf("%s\n",x); continue;}
    B=My_mod(x,A);
    printf("%ld\n",gcd(A,B));
}
}
