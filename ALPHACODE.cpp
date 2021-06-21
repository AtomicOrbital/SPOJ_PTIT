#include<stdio.h>
#include<string.h>
void onetest()
{
    char *p,s[10000];
    long long A[10000],n;
    scanf("%s",s+1);
    if(strcmp(s+1,"0")==0) return;
    if(s[1]=='0') {printf("0\n");goto Next;}
    s[0]=2;
    A[0]=A[1]=1;
    n=strlen(s+1);
    s[1]=s[1]-'0';
    for(long i=2;i<=n;i++)
    {
    s[i]=s[i]-'0';
    if(s[i]==0)
    {
    if(s[i-1] ==s[i]|| s[i-1]>2) {printf("0\n");goto Next;}
    A[i]=A[i-2];
    A[i-1]=i>=3?A[i-3]:1;

    }
    else
    {
    int t=s[i-1]*10+s[i];
    if(9<t && t<=26) A[i]=A[i-1]+A[i-2];
    else A[i]=A[i-1];
    }
}
printf("%lld\n",A[n]);
Next : onetest();
}
int main()
{
  onetest();
}
