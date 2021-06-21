#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
long S[2000005];
typedef struct
{
 long s,f,p;
}Order;
bool ss(Order u,Order v){return u.f<v.f;}
int main()
{
    long n,L;
    Order O[10004];
    scanf("%ld",&n);
    for(long i=0;i<n;i++)
    {
    scanf("%ld%ld%ld",&O[i].s,&O[i].f,&O[i].p);
    O[i].f+=O[i].s;
    }
    sort(O,O+n,ss);
    L=0;
    S[0]=0;
    for(long i=0;i<n;i++)
    {
    for(long j=L+1;j<=O[i].f;j++) S[j]=S[j-1];
    L=O[i].f;
    if(S[L]<S[O[i].s]+O[i].p) S[L]=S[O[i].s]+O[i].p;
    }
    printf("%ld",S[L]);
}
