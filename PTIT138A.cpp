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
  ll a,b,c;
  while(cin>>a>>b>>c)
  {
      if(a==0&&b==0&&c==0) break;
      a*=a;b*=b;c*=c;
      if(a+b==c||b+c==a||a+c==b) cout<<"right"<<endl;
      else cout<<"wrong"<<endl;
  }
}
