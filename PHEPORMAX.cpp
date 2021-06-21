#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    long long A=0,B=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {scanf("%lld",&x); A=A|x;}
    for(int i=0;i<n;i++) {scanf("%lld",&x); B=B|x;}
    printf("%lld",A+B);
}
