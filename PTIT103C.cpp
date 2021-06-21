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
  while(t--)
  {
      ll x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      ll x=sqrt(pow(x1-x2,2)+pow(-abs(y1)-abs(y2),2));
      cout<<x<<endl;
  }
}
