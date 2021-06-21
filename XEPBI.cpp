#include<stdio.h>
#include<math.h>
int main()
{
    long h,r,d;
    scanf("%ld%ld",&r,&h);
    d=2*(h/r);
    double r1=double(r)/2;
    h=h%r;
    if(h>=r1+r1*sqrt(3)/2) d+=3;
    else if(h>=r1) d+=2;
    else d++;
    printf("%ld",d);
}
