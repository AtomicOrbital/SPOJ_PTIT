#include<iostream>
#include<math.h>
#include<stdio.h>
#include<vector>
#define MAX 10000000
using namespace std;
long arr[10000007];
long arr2[10000007];
void init ()
{
    for(long i=1;i<=MAX;i++)
    {
        arr[i]=1;
        arr2[i]=0;
    }
    arr[1]=0;
}
void sangNT()
{
    for (long i=2;i<=sqrt(MAX);i++)
    {
        if (arr[i]==1)
        {
            for (long j=2;j<=MAX/i;j++)
            {
                arr[j*i]=0;
            }
        }
    }
}
int main ()
{
    init();
    sangNT();
    vector<long>v;
    for (long i=1;i<=MAX;i++)
    {
        if (arr[i]==1) v.push_back(i);
    }
    for (long i=0;i<v.size();i++)
    {
        for (long j=1;j<=MAX/v[i];j++)
        {
            arr2[v[i]*j]++;
        }
    }
    int t;
    scanf("%d",&t);
    for (int k=1;k<=t;k++)
    {
        long A,B,K,dem=0;
        scanf("%ld%ld%ld",&A,&B,&K);
        for (long i=A;i<=B;i++)
        {
            if (arr2[i]==K) dem++;
        }
        printf ("Case #%d: %ld\n",k,dem);
    }
    return 0;
}
