#include<iostream>
#include<stdio.h>
using namespace std;
class Long
{
    public:
    char x[10005],*p,*q;
    Long(int s=0){p=q=x+10000;*p=s;}
    Long &operator=(Long A)
    {
        p=A.x+(A.p-A.x);
        q=A.x+(A.q-A.x);
        for(char *r=p,*s=A.p;r<=q;r++,s++) *r=*s;
        return *this;
    }
    friend void Nhan(Long &A,Long B,long long k);
    friend void Cong(Long &A,Long &B);
    void Xuat();
};
void Long::Xuat()
{
    char xx[10005];
    char *r=xx;
    for(char *s=p;s<=q;s++,r++) *r=*s+'0';
    *r=0;
    printf("%s",xx);
}
void Cong(Long &A,Long &B)
{
    char *s,*r;
    long long k=0;
    s=A.q;
    r=B.q;
    while(s>=A.p&&r>=B.p)
    {
        k=k+*s+*r;
        *s=k%10;
        k=k/10;
        s--;r--;
    }
    while(s>=A.p)
    {
        k=k+*s;
        *s=k%10;
        k=k/10;
        s--;
    }
    while(r>=B.p)
    {
        k=k+*r;
        *s=k%10;
        k=k/10;
        s--;r--;
    }
    if(k>0) {*s=k; A.p=s;}
    else A.p=s+1;
}
long long C[55][55];
Long A[55];
void TG()
{
    C[0][0]=1;
    for(int i=1;i<=50;i++)
    {
        C[i][0]=C[i][i]=1;
        for(int j=1;j<i;j++)
        C[i][j]=C[i-1][j-1]+C[i-1][j];
    }
}
void  Bong()
{
    Long L;
    *(A[0].p)=1;
    for(int k=1;k<=50;k++)
    {
        for(int j=0;j<k;j++)
        {
            long long n=0;
            long long kk=C[k-1][j];
            L.q=L.x+10000;
            char *s=L.q;
            for(char *r=A[j].q;r>=A[j].p;r--,s--)
            {
                n=n+*r*kk;
                *s=n%10;
                n=n/10;
            }
            while(n>0)
            {
                *s--=n%10;
                n=n/10;
            }
            L.p=s+1;

            Cong(A[k],L);
        }
    }
}
int main()
{
    int T=0;
    int K[30005];
    TG();
    Bong();
    do
    {
        T++;
        scanf("%d",&K[T]);
    }
    while(K[T]>0);
    for(int i=1;i<T;i++)
    {
        printf("%d ",K[i]);
        A[K[i]].Xuat();
        printf("\n");
    }
}
