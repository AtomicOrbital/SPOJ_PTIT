#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long x,y;
long long n;
int f[6]={0};
void init()
{
    cin>>x>>y;
    cin>>n ;
}
void process()
{
    f[0]=x;
    f[1]=y;
    for(int i=2;i<6;i++)
    {
        long long c=f[i-1]-f[i-2];
        f[i]=c;
    }
    n%=6;
    if (n==0) n=6;
    cout<<f[n-1];
}
int main()
{
    init();
    process();
    return 0;
}
