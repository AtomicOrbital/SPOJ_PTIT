#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    double x,y;
}Diem;
double Doan(Diem A,Diem B)
{
    double u=A.x-B.x;
    double v=A.y-B.y;
    return sqrt(u*u+v*v);
}
double TG(Diem A,Diem B,Diem C)
{
    double a=Doan(B,C);
    double b=Doan(A,C);
    double c=Doan(B,A);
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
void Tim(Diem *X)
{
    double SDEF=TG(X[3],X[4],X[5]);
    double SABC=TG(X[0],X[1],X[2]);
    double SAHB=SDEF/2;
    double k=SAHB/SABC;
    Diem H,G;
    H.x=X[0].x+k*(X[2].x-X[0].x);
    H.y=X[0].y+k*(X[2].y-X[0].y);
    G.x=X[1].x-X[0].x+H.x;
    G.y=X[1].y-X[0].y+H.y;
    cout<<fixed<<setprecision(3)<<G.x<<" "<<G.y<<" "<<H.x<<" "<<H.y<<endl;
}
int main()
{
    int T=0;
    Diem **D=new Diem *[30005];
    do
    {
        T++;
        D[T]=new Diem[8];
        for(int i=0;i<6;i++) cin>>D[T][i].x>>D[T][i].y;
        int d=0;
        for(int i=0;i<6;i++)
        {
            if(D[T][i].x==0) d++;
            if(D[T][i].y==0) d++;
        }
        if(d==12)break;
    }while(1);
    for(int i=1;i<T;i++)
    Tim(D[i]);
}
