#include<bits/stdc++.h>
#include<string>
#include<vector>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9;
bool ngto(ll n)
{
    if(n<2) return false;
    for(int i=2;i*i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
void xuly()
{
  ll n,p;
  cin>>n>>p;
  if(p==2) cout<<2*n;
  else if(p==3)
  {
      if(3*(2*n-1)<=MOD) cout<<3*(2*n-1);
      else cout<<0;
  }
  else
  {
     if(p>=10001&&n>=2) cout<<0;
     else if(n==1) cout<<p;
     else
     {
        ll dem=1,pos=0;
        for(int i=p;i<=N;i+=2)
        {
            if(dem==n)
            {
                if(i*p<=MOD) pos=i*p;
                break;
            }
            if(ngto(i)) dem++;
        }
        cout<<pos;
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
