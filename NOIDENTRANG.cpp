#include<stdio.h>
#include<algorithm>
using namespace std;
struct diem
{
 int x;
 bool t;
};
bool ss(diem a,diem b){return a.x<b.x;}
int main()
{
    long n,k=0,m,i;
    diem A[200005];
    scanf("%ld",&n);
    m=n*2;
    for(i=0;i<n;i++) A[i].t=true;
    for(;i<m;i++) A[i].t=false;
    for(i=0;i<m;i++) scanf("%d",&A[i].x);
    sort(A,A+m,ss);
    for(i=1;i<m;i++)
    if(A[i].t!=A[i-1].t) {k++;i++;}
    printf("%ld",k);
}
