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
  ll n;
  cin>>n;
  while(n!=0)
  {
      ll r=n%10;
      if(r==1||r==2||r==3||r==5||r==6||r==8||r==9||r==0)
      {
          cout<<"NO"<<endl;
          return 0;
      }
      n/=10;
  }
  cout<<"YES"<<endl;
  return 0;
}
