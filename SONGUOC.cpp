#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int main()
{
  ll a,b,c,d;
  while(cin>>a>>b>>c>>d)
  {
      if(a==-1&&b==-1&&c==-1&&d==-1) break;
      if(a==-1)
      {
          ll d1=c-b;
          if(d-c==d1) cout<<b-d1<<endl;
          else
          {
              if(d%c==0&&c%b==0)
              {
                  ll d1=d/c,d2;
                  d2=c/b;
                  if(d1==d2) cout<<b/d1<<endl;

              }
              else cout<<-1<<endl;
          }
      }
      if(b==-1)
      {
          ll d1=d-c;
          ll trung1;
          if((a+c)%2==0)
          {
              trung1=(a+c)/2;
              if(c-trung1==d1) cout<<trung1<<endl;
          else
          {
              ll x=sqrt(a*c);
              if(d%c==0&&x*x==a*c)
              {
                  ll q1=d/c;
                  if(a*q1==x) cout<<x<<endl;
              }
              else cout<<-1<<endl;
          }
      }
      if(c==-1)
      {
          if((d+b)%2==0)
          {
            ll d1=b-a;
            ll trung1=(d+b)/2;
            if(trung1-b==d1) cout<<trung1<<endl;
          }
          else
          {
              ll x=sqrt(b*d);
              if(b%a==0&&x*x==b*d)
              {
                  ll q1=b/a;
                  if(b*q1==x) cout<<x<<endl;
              }
              else cout<<-1<<endl;
          }
      }
      if(d==-1)
      {
          ll d1=b-a;
          if(c-b==d1) cout<<c+d1<<endl;
          else
          {
              if(b%a==0)
              {
                  ll q1=b/a;
                  if(b*q1==c) cout<<c*q1<<endl;
              }
              else cout<<-1<<endl;
          }
      }
    }
  }
}
