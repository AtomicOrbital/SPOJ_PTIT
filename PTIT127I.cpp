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
ll a[N],f[N]={0};
int main()
{
  ll n;
  while(cin>>n)
  {
    if(n==0) break;
    ll h=6*n,dem=0;
    for(int i=1;i<=h;i++)
    {
      cin>>a[i];
      if(f[a[i]]==0) dem++;
      f[a[i]]++;
    }
    if(dem==49) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    for(int i=1;i<=h;i++) f[a[i]]=0;
  }
}
