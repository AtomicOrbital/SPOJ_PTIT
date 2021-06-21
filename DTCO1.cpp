#include<stdio.h>
typedef struct HCN
{
    int x1,y1;
    int x2,y2;
}HCN;
bool KT(HCN H,int a,int b,int c,int d)
{
    if(H.x1<=a && a<=H.x2 && H.x1<=c && c<=H.x2 && H.y2<=b && b<=H.y1
    && H.y2<=d && d<=H.y1)
    return true;
    return false;
}

void Swap(int &a,int &b)
{
    int t=a;a=b;b=t;
}
int main()
{
    int n;
    int X[10000];
    int u=0;
    int Y[10000];
    scanf("%d",&n);
    HCN *H=new HCN[n+5];
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&H[i].x1,&H[i].y1,&H[i].x2,&H[i].y2);
        u++;  X[u]=H[i].x1; Y[u]=H[i].y1;
        u++;  X[u]=H[i].x2; Y[u]=H[i].y2;
    }
    for(int i=1;i<u;i++)
    for(int j=i+1;j<=u;j++)
    if(X[i]>X[j]) Swap(X[i],X[j]);
    for(int i=1;i<u;i++)
    for(int j=i+1;j<=u;j++)
    if(Y[i]>Y[j]) Swap(Y[i],Y[j]);
    long S=0;
    for(int i=1;i<u;i++)
    for(int j=1;j<u;j++)
    {
        for(int k=1;k<=n;k++)
        if(KT(H[k],X[i],Y[j+1],X[i+1],Y[j]))
        {S+=long(X[i+1]-X[i])*(Y[j+1]-Y[j]);break;}
    }
    printf("%ld",S);
}
