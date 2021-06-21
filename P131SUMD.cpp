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
   ll a,b;
   cin>>a>>b;
   ll a1=a,b1=b,a2=a,b2=b,a3=a,b3=b;
   ll s=0,x=0;
   while(a!=0)
   {
     ll r=a%10;
     if(r==5) r=6;
     s=s*10+r;
     a/=10;
   }
   while(s!=0)
   {
       x=x*10+s%10;
       s/=10;
   }
   ll s1=0,x1=0;
   while(b!=0)
   {
     ll r=b%10;
     if(r==5) r=6;
     s1=s1*10+r;
     b/=10;
   }
   while(s1!=0)
   {
       x1=x1*10+s1%10;
       s1/=10;
   }
   while(a1%10==0)
   {
       x*=10;
       a1/=10;
   }
   while(b1%10==0)
   {
       x1*=10;
       b1/=10;
   }
   ll s2=0,x2=0;
   while(a2!=0)
   {
     ll r=a2%10;
     if(r==6) r=5;
     s2=s2*10+r;
     a2/=10;
   }
   while(s2!=0)
   {
       x2=x2*10+s2%10;
       s2/=10;
   }
   ll s3=0,x3=0;
   while(b2!=0)
   {
     ll r=b2%10;
     if(r==6) r=5;
     s3=s3*10+r;
     b2/=10;
   }
   while(s3!=0)
   {
       x3=x3*10+s3%10;
       s3/=10;
   }
   while(a3%10==0)
   {
       x2*=10;
       a3/=10;
   }
   while(b3%10==0)
   {
       x3*=10;
       b3/=10;
   }
   cout<<x2+x3<<" "<<x+x1;
}
