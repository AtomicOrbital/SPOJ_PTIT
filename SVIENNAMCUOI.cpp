#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#define A first
#define B second
using namespace std;
typedef pair<long long,long long> Mon;
bool ss(Mon X,Mon Y){return X.B<Y.B;}
int main()
{
    long long n,r,avg,a,b;
    long long tam;
    scanf("%lld%lld%lld",&n,&r,&avg);
    long long t=n*avg;
    vector<Mon> V;
    for(long i=1;i<=n;i++)
    {
    scanf("%lld%lld",&a,&b);
    t-=a;
    V.push_back(Mon(a,b));
    }
    if(t<=0) printf("0");
    else
    {
    sort(V.begin(),V.end(),ss);
    long long D=0;
    for(long i=0;i<n;i++)
    {
    tam=r-V[i].A;
    if(t<=tam)
    {
    D+=t*V[i].B; break;
    }
    else
    {
    D+=tam*V[i].B;
    t-=tam;
    }
    }
    cout<<D;
    }
}
