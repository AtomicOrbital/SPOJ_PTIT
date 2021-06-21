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
  ll xa,ya,xb,yb,xc,yc;
  cin>>xa>>ya>>xb>>yb>>xc>>yc;
  ll ans=(xb-xa)*(yc-ya)-(xc-xa)*(yb-ya);
  if(ans==0) cout<<"TOWARDS";
  else if(ans>0) cout<<"LEFT";
  else cout<<"RIGHT";
  return 0;
}
