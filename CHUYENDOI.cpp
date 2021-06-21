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
int main()
{
    ll n,kt=1;
    cin>>n;
    ll dem=0;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]==1) dem++;
      else kt=0;
    }
    if(kt==1)
    {
        cout<<dem-1;
        return 0;
    }
    else
    {
        ll maxn=dem;
        for(int i=0;i<n;i++)
        {
           for(int j=i;j<n;j++)
           {
              ll d1=0,d0=0;
              for(int k=i;k<=j;k++)
              {
                  if(a[k]==1) d1++;
                  else d0++;
              }
              maxn=max(d0-d1+dem,maxn);
           }
        }
        cout<<maxn;
    }
}
