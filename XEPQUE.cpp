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
const int MOD=1e9+7;
ll a[N],f[N]={0},b[N],m=0;
void xuly()
{
  ll n=6,kt=0,pos;
  f1(i,n) {cin>>a[i];f[a[i]]++;}
  sort(a+1,a+n+1);
  f1(i,n)
  {
    if(f[a[i]]>=4)
    {
        kt=1;
        pos=a[i];
        break;
    }
  }
  if(kt==0) cout<<"Alien";
  else
  {
     f1(i,n)
     {
         if(a[i]!=pos) b[++m]=a[i];
     }
     if(m==1) b[++m]=pos;
     if(b[m]==b[m-1]) cout<<"Elephant";
     else cout<<"Bear";
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
