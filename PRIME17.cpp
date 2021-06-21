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
bool ngto(ll n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0) return false;
    }
    return true;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    ll l,r,dem=0;
    cin>>l>>r;
    for(int i=l;i<=sqrt(r);i++)
    {
        if(ngto(i)) dem++;
    }
    cout<<dem<<endl;
  }
  return 0;
}
