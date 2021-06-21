#include<iostream>
using namespace std;
int main()
{
    int n,k;
    long long C[1005][1005];
    int T,id;
    cin>>T;
    long long *K=new long long [T+5];
    for(int i=1;i<=T;i++)
    {
    cin>>id>>n>>k;
    for(int j=0;j<=k;j++) C[0][j]=C[1][j]=0;
    C[1][0]=2;
    C[2][0]=3;
    for(int i=3;i<=n;i++) C[i][0]=C[i-1][0]+C[i-2][0];
    for(int i=2;i<=n;i++)
    for(int j=1;j<=k;j++)
    {
    if(j>=i)C[i][j]=0;
    else if(j+1==i) C[i][j]=1;
    else if(j+2==i) C[i][j]=2;
    else
    {
    C[i][j]=C[i-1][j];
    for(int u=0;u<=j;u++)C[i][j]+=C[i-2-j+u][u];
    }
    }
    K[i]=C[n][k];
    }
    for(int i=1;i<=T;i++)
    {
        cout<<i<<" "<<K[i]<<"\n";
    }
}
