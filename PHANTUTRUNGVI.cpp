#include<stdio.h>
#include<iostream>
typedef struct Tre
{
    long G;
    Tre *L,*R;
    Tre(long g,Tre *l=0,Tre *r=0)
    {
        G=g;
        L=l;
        R=r;
    }
}Tre;
Tre *Add(Tre *T,long x)
{
    if(T==0) return new Tre(x);
    if(x<T->G)
    {
        if(T->L==0) T->L=new Tre(x);
        else T->L=Add(T->L,x);
        return T;
    }
    if(T->R==0) T->R=new Tre(x);
    else T->R=Add(T->R,x);
    return T;
}
long GetMax(Tre *T)
{
    Tre *p;
    long x;
    if(T->L->R==0)
    {
        x=T->L->G;
        T->L=T->L->L;
        return x;
    }
    for(p=T->L;p->R->R!=0;p=p->R);
    x=p->R->G;
    p->R=p->R->L;
    return x;
}
long GetMin(Tre *T)
{
    Tre *p;
    long x;
    if(T->R->L==0)
    {
        x=T->R->G;
        T->R=T->R->R;
        return x;
    }
    for(p=T->R;p->L->L!=0;p=p->L);
    x=p->L->G;
    p->L=p->L->R;
    return x;
}
void XL(long *a)
{
    long n=a[0],x;
    Tre *T=new Tre(a[1]);
    printf("%ld ",a[1]);
    long d=1;
    for(int i=2;i<=n;i+=2)
    {
        if(a[i]<T->G && a[i+1]<T->G)
        {
            T=Add(T,a[i]);
            T=Add(T,a[i+1]);
            T->R=Add(T->R,T->G);
            x=GetMax(T);
            T->G=x;
            printf("%ld ",x);
        }
        else if(a[i]>T->G && a[i+1]>T->G)
        {
            T=Add(T,a[i]);
            T=Add(T,a[i+1]);
            T->L=Add(T->L,T->G);
            x=GetMin(T);
            T->G=x;
            printf("%ld ",x);
        }
        else
        {
            if(a[i]<a[i+1])
            {
                T->L=Add(T->L,a[i]);
                T->R=Add(T->R,a[i+1]);
            }
            else
            {
                T->L=Add(T->L,a[i+1]);
                T->R=Add(T->R,a[i]);
            }
            printf("%ld ",T->G);
        }
        d++;
        if(d%10==0) printf("\n");
    }
}
using namespace std;
int main()
{
    int P;
    cin>>P;
    long **A=new long *[P+5];
    for(int i=1;i<=P;i++)
    {
        int u;
        long n;
        scanf("%d%ld",&u,&n);
        A[i]=new long[n+5];
        A[i][0]=n;
        for(int j=1;j<=n;j++)
        scanf("%ld",&A[i][j]);
    }
    for(int i=1;i<=P;i++)
    {
        printf("%d %ld\n",i,(A[i][0]+1)/2);
        XL(A[i]);
        printf("\n");
    }
}
