#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    long d=0,m=0;
    cin>>s;
    for(char *p=s;*p;p++)
    if(*p=='(')
    {
        if(d<0)
        {
            d=-d;
            m=m+d/2;
            if(d%2) {d=2;m++;} else d=1;
        }
        else  d++;
    }
    else  d--;
    if(d<0)  d=-d;
    if(d%2) d++; m+=d/2;
    cout<<m;
}
