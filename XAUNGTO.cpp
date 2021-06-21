#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
#define MM 100000
long s[MM];
long n;
void Earothen()
{
    bool *x=new bool[MM+5];
    long i,j;
    for(i=3;i<MM;i+=2) x[i]=true;
    for(i=3;i<MM/i+2;i+=2)
    if(x[i])
    {
        for(j=i*i;j<MM;j=j+i) x[j]=false;
    }
    n=0;
    for(i=MM-1;i>=3;i-=2)
    if(x[i])
    {
        n++;
        s[n]=i;
    }
    n++;
    s[n]=2;
}
typedef char xau[20];
class Test
{
    int T;
    xau A[100];
    public:
        void solve();

};
void Test::solve()
{
    char xx[257];
    char yy[257];
    scanf("%s",xx);
    T=0;
    while (strcmp(xx,"0")!=0)
    {
        for(long i=1;i<=n;i++)
        {
            sprintf(yy,"%ld",s[i]);
            if(strstr(xx,yy)!=NULL)
            {
                strcpy(A[T],yy);
                break;
            }
        }
        T++;
        scanf("%s",xx);
    }
    for(long i=0;i<T;i++) printf("%s\n",A[i]);
}
int main()
{

    long n;
    Earothen();
    Test T;
    T.solve();
}
