#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct
{
int lmax;
char mi,ma;
}tenbo;
char max(char *s)
{
char m=*s;
for(s++;*s;s++)
if(m<*s)m=*s;
return m;
}
char min(char *s)
{
    char m=*s;
    for(s++;*s;s++)
    if(m>*s)m=*s;
    return m;
}
void ganbo(char *s,tenbo &b)
{
    b.ma=max(s);
    b.mi=min(s);
    b.lmax=0;
    for(char *p=s;*p;p++)
    if (*p==b.ma) b.lmax++;
}
void read(long &n,tenbo *&b)
{
char x[30];
cin>>n;
b=new tenbo[n+2];
for(long i=1;i<=n;i++)
{
fflush(stdin);
scanf("%s",x);
ganbo(x,b[i]);
}
}
int kt(tenbo a,tenbo b)
{
if(a.ma<b.mi)return 1;
if(b.ma<a.mi)return -1;
if(a.ma==a.mi && b.ma==b.mi && a.mi==b.ma)
{
if (a.lmax<b.lmax) return 1;
if (a.lmax>b.lmax) return -1;
return 0;
}
if(a.mi<a.ma && a.ma==b.mi && b.mi<b.ma) return 1;
if(b.mi<b.ma && b.ma==a.mi && a.mi<a.ma) return -1;
if(a.ma==b.mi && b.lmax>a.lmax) return 1;
if(b.ma==a.mi && a.lmax>b.lmax) return -1;
if(a.ma==b.mi && a.mi==a.ma) return 1;
if(b.ma==a.mi && b.mi==b.ma) return -1;
return 0;
}
void SCRAMLET(long n,tenbo*b)
{
tenbo*db=new tenbo[n+2];
long *id=new long[n+2];
long i,dem[150],count[150];
long d[50002],c[50002];
char ch;
for(ch='a';ch<='z';ch++) dem[ch]=0;
for(i=1;i<=n;i++)
dem[b[i].ma]++;
dem['a'-1]=0;
count['a'-1]=0;
for(ch='a';ch<='z';ch++) {dem[ch]+=dem[ch-1]; count[ch]=dem[ch];}
for(i=1;i<=n;i++)
{
    char chon=b[i].ma;
    db[dem[chon]]=b[i];
    id[dem[chon]]=i;
    dem[chon]--;
}
for(i=1;i<=n;i++)
{
    if(db[i].mi<db[i].ma) d[id[i]]=count[db[i].mi]+1;
    else
    {
    d[id[i]]=count[db[i].mi-1]+1;
    for(long tic=count[db[i].mi-1]+1;tic<=count[db[i].mi];tic++)
    if(kt(db[tic],db[i])==1) d[id[i]]++;
    }
}
for(ch='a';ch<='z';ch++) dem[ch]=0;
for(i=1;i<=n;i++)
dem[b[i].mi]++;
dem['a'-1]=0;
count['a'-1]=0;
for(ch='a';ch<='z';ch++) {dem[ch]+=dem[ch-1]; count[ch]=dem[ch];}
for(i=1;i<=n;i++)
{
    char chon=b[i].mi;
    db[dem[chon]]=b[i];
    id[dem[chon]]=i;
    dem[chon]--;
}
for(i=1;i<=n;i++)
{
    c[id[i]]=count[db[i].ma];
    for(long tic=count[db[i].ma-1]+1;tic<=count[db[i].ma];tic++)
    if(kt(db[tic],db[i])==-1) c[id[i]]--;
}
    for(i=1;i<=n;i++)
    cout<<d[i]<<" "<<c[i]<<"\n";
}
int main()
{
    long n;
    tenbo *b;
    read(n,b);
    SCRAMLET(n,b);
}
