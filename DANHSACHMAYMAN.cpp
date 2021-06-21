#include<stdio.h>
#include<math.h>
long long C[15][2005];
long long xl(int n,int m)
{
    for(int i=1;i<=n;i++) C[i][1]=0;
    for(int j=1;j<=m;j++) C[1][j]=j;
    for(int i=2;i<=n;i++)
    {
        int k=pow(2,i-1);
        for(int j=2;j<k;j++) C[i][j]=0;
        C[i][k]=1;
        for(int j=i+1;j<=m;j++) C[i][j]=C[i][j-1]+C[i-1][j/2];
    }
    return C[n][m];
}
int main()
{
    int T;
    scanf("%d",&T);
    int *n=new int[T+5];
    int *m=new int[T+5];
    for(int i=1;i<=T;i++) scanf("%d%d",&n[i],&m[i]);
    for(int i=1;i<=T;i++)
    {
        printf("Data set %d: %d %d %lld\n",i,n[i],m[i],xl(n[i],m[i]));
    }
}
