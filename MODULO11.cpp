#include<bits/stdc++.h>
#include<string>
using namespace std;
string numtostr(long long a)
{
    string s="";
    while(a!=0)
    {
      char res=a%10+'0';
      s=res+s;
      a/=10;
    }
    return s;
}
int StrToNumArr(string a,string b,int A[],int B[])
{
    int lenA=a.length();
    int lenB=b.length();
    int len;
    if (lenA>lenB) len=lenA;
    else len=lenB;
    lenA--;
    lenB--;
    for (int i=len-1; i>=0; i--)
    {
        if (lenA>=0)
        {
            A[i] = a[lenA]-'0';
            lenA--;
        } else A[i]=0;

        if (lenB>=0)
        {
            B[i] = b[lenB]-'0';
            lenB--;
        } else B[i]=0;
    }
    return len;
}
int SumBig (int A[],int B[],int len,int C[])
{
    for (int i=len-1; i>=0; i--) {
        if (i!=0) {
            int x = A[i]+B[i];
            C[i]=x%10;
            B[i-1]=B[i-1]+(x/10);
        } else C[i]=A[i]+B[i];
    }
    return len;
}
int ss(int A[],int B[],int len)
{
    for (int i=0; i<len; i++)
    {
        if (A[i]>B[i]) return 1;
        else if (A[i]<B[i]) return -1;
    }
    return 0;
}
void sc (int A[],int B[],int len)
{
    for (int i=0; i<len; i++)
    {
        A[i]=B[i];
    }
}
int PrBig(int A[],int B[],int len,int C[])
{
    int Btg[2006];
    int Ctg[2006];
    int lenMax=2*len;
    for (int i=0;i<lenMax;i++)
    {
        Btg[i]=0;
        Ctg[i]=0;
    }
    for (int i=len-1;i>=0;i--)
    {
        lenMax--;
        int k=lenMax;
        for (int j=0;j<2*len;j++)
        {
            Btg[j]=0;
        }
        for (int j=len-1; j>=0; j--)
        {
            int x=Btg[k]+B[i]*A[j];
            Btg[k]=(x)%10;
            Btg[k-1]=(x)/10;
            k--;
        }
        SumBig(Ctg,Btg,2*len,C);
        sc (Ctg,C,2*len);
    }
    for (int i=0;i<2*len;i++)
    {
        if (C[i]!=0) return(2*len-i);
    }
    return 0;
}
void xuly()
{
    long long a,b,c;
    cin>>a>>b>>c;
    string a1=numtostr(a),b1=numtostr(b);
    if(a==0||b==0) {cout<<0<<endl;return;}
    else if((c==0||c==1)&&a!=0&&b!=0)
    {
       int len1;
       int Ap1[1003],Bp1[1003];
       len1=StrToNumArr(a1,b1,Ap1,Bp1);
       int Pr1[2006];
       int lenPr1=PrBig(Ap1,Bp1,len1,Pr1);
       for(int i=2*len1-lenPr1;i<2*len1;i++)
       {
            cout<<Pr1[i];
       }
       cout<<endl;
       return ;
    }
    long long num=0,res=0;
    int len;
    int Ap[1003];
    int Bp[1003];
    len=StrToNumArr(a1,b1,Ap,Bp);
    int Pr[2006];
    int lenPr=PrBig(Ap,Bp,len,Pr);
    for(int i=2*len-lenPr;i<2*len;i++)
        {
            num=res*10+Pr[i];
            res=num%c;
        }
    cout<<res<<endl;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--) xuly();
}
