#include<stdio.h>
int main()
{
    char x[100005],*p,y[100005],*q,t;
    long D[200];
    for(char c='a';c<='z';c++) D[c]=0;
    scanf("%s",x);
    for(p=x;*p;p++) D[*p]++;
    t='z';
    p=x;
    q=y;
    do
    {
    while(t>='a' && D[t]==0) t--;
    if(t<'a') break;
    while(*p!=t) {D[*p]--;p++;}
    *q++=t;
    D[t]--;
    p++;
    }while(1);
    *q=0;
    printf("%s",y);
}
