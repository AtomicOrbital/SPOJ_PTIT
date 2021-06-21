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
ll multiply(ll x,ll res[],ll res_size)
{
    ll carry=0;
    for (int i=0;i<res_size;i++)
    {
        ll prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}
ll power(ll x,ll n,ll p)
{
    ll res[10000];
    ll res_size=0;
    ll temp=x;
    while(temp!=0)
    {
        res[res_size++]=temp%10;
        temp=temp/10;
    }
    for(int i=2;i<=n;i++) res_size=multiply(x,res,res_size);
    ll num=0,du=0;
    for(int i=res_size-1;i>=0;i--)
    {
        num=du*10+res[i];
        du=num%p;
    }
    return du;
}
void xuly()
{
  ll p,dem=0;
  cin>>p;
  for(ll i=1;i<=p-1;i++)
  {
    if(power(i,p-1,p)==1)
    {
        ll kt=1;
        for(ll j=1;j<=p-2;j++)
        {
          if(power(i,j,p)==1)
          {
              kt=0;
              break;
          }
        }
        if(kt==1) dem++;
    }
  }
  cout<<dem;
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
