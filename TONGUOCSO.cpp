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
ll a[N],c[N];
void snt()
{
    for(int i=1;i<=N;i++) a[i]=0;
    for(int i=2;i<=N;i++)
    {
        for(int j=1;j<=N/i;j++) a[i*j]+=i;
    }
}
void xuly()
{
   ll n;
   cin>>n;
   snt();
   ll s=0,dem=0;
   f1(i,n)
   {
       ll x;
       cin>>x;
       cout<<a[x]<<" ";
       dem+=x;
       s+=a[x];
   }
   //cout<<dem<<" "<<s;
   //cout<<s-dem;
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
