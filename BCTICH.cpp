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
  int t;
  cin>>t;
  for(int k=1;k<=t;k++)
  {
      cin>>k;
      ll n,dem=0;
      cin>>n;
      cout<<k<<" ";
      ll j=2;
      double s=0;
      while(j<n/2+1)
      {
          s=(double)(2*n+j-j*j)/(2*j);
          if(s==1)
          {
              dem++;
              cout<<dem<<endl;
              break;
          }
          else if(s<1)
          {
              cout<<dem<<endl;
              break;
          }
          if(s-(ll)s==0) dem++;
         j++;
      }
  }
}
