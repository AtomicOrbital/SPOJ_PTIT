#include<stdio.h>
int main()
{
    long N;
    long A[]={0,0,0,0,0,0,0,0};
    int a,b,c,d;
    scanf("%ld",&N);
    scanf("%d%d",&a,&b);
    long k=1;
    int  p=a<b?a:b;
    A[a]=1;
    A[b]=1;
    for(long i=2;i<=N;i++)
    {
        scanf("%d%d",&c,&d);
        if(c==a||c==b) A[c]++;
        else A[c]=1;
        if(k<A[c] || (k==A[c] && p>c)) {k=A[c];p=c;}
        if(d!=c)
        {
            if(d==a||d==b) A[d]++;
            else A[d]=1;
            if(k<A[d] || (k==A[d] && p>d)) {k=A[d];p=d;}
        }
        a=c;
        b=d;
    }
    printf("%ld %d",k,p);
}
