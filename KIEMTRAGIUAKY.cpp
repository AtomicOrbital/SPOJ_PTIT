#include<stdio.h>
int main()
{
    bool f[1000005];
    long n,a;
    long maxx=0;
    scanf("%ld",&n);
    for(long i=1;i<=1000000;i++) f[i]=false;
    for(long i=0;i<n;i++) {scanf("%ld",&a);f[a]=true;}
    for(long i=1000000;i>maxx;i--)
      if(f[i])
      {
       for(long j=i-maxx-1;j>maxx;j--)
        if(f[j])
        {
          if(i%j>maxx) maxx=i%j;
        }
      }
    printf("%ld",maxx);
}
