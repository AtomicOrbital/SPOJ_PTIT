#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
void xuly()
{
  double a,b,c;
  cin>>a>>b>>c;
  if(a==0)
  {
      if(b==0&&c==0) cout<<-1;
      else if(b==0&&c!=0) cout<<0;
      else if(b!=0&&c!=0)
      {
          cout<<1<<endl;
          cout<<fixed<<setprecision(5)<<(-c)/b;
      }
  }
  else
  {
      double d=b*b-4*a*c;
      if(d<0) cout<<0;
      else if(d==0)
      {
          cout<<1<<endl;
          cout<<fixed<<setprecision(5)<<(-b)/(2*a);
      }
      else
      {
          double x1=(-b+sqrt(d))/(2*a);
          double x2=(-b-sqrt(d))/(2*a);
          cout<<2<<endl;
          cout<<fixed<<setprecision(5)<<min(x1,x2)<<endl;
          cout<<fixed<<setprecision(5)<<max(x1,x2)<<endl;
      }
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}
