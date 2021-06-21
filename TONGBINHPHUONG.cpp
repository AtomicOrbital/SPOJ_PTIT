#include<iomanip>
#include<iostream>
#include<stdio.h>
using namespace std;
#define D 1000000000
int main()
{
    unsigned long long x,z,a,b,c,d,A,B,C;
    cin>>x;
    z=2*x+1;
    x=x*(x+1)/2;
    if(x%3==0) x=x/3; else z=z/3;
    a=x/D; b=x%D;
    c=z/D; d=z%D;
    A=a*c;
    B=b*c+a*d;
    C=b*d;
    if(C>D) {B+=C/D; C=C%D;}
    if(B>D) {A+=B/D; B=B%D;}
    if(A>0) cout<<A<<setfill('0')<<setw(9)<<B<<setfill('0')<<setw(9) << C;
    else if(B>0) cout<<B<<setfill('0')<<setw(9) << C;
    else cout<<C;
}
