//#include<conio.h>
#include<stdio.h>
void xl(char *x)
{
    int d[]={0,0,0,0,0,0,0,0};
    if(x[0]=='T')
    {
        if(x[1]=='T') {x+=2;goto A;}
        else          {x+=2;goto B;}
    }
    else
    {
        if(x[1]=='T') {x+=2;goto C;}
        else          {x+=2;goto D;}
    }
    A:
        if(*x=='T') {d[0]++; x++; goto A;}
        if(*x=='H') {d[1]++; x++; goto B;}
        goto K;
    B:
        if(*x=='T') {d[2]++; x++; goto C;}
        if(*x=='H') {d[3]++; x++; goto D;}
        goto K;
    C:
        if(*x=='T') {d[4]++; x++; goto A;}
        if(*x=='H') {d[5]++; x++; goto B;}
        goto K;
    D:
        if(*x=='T') {d[6]++; x++; goto C;}
        if(*x=='H') {d[7]++; x++; goto D;}
        goto K;
    K:
    for(int i=0;i<7;i++)
    printf("%d ",d[i]);
    printf("%d",d[7]);
}
int main()
{
    char S[10005];
    int P,i,x;
    scanf("%d",&P);
    for(int i=1;i<=P;i++)
    {
        scanf("%d%s",&x,S);
        printf("%d ",i);
        xl(S);
        printf("\n");
    }
    //getch();
}
