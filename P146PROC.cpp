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
ll a[10];
int main()
{
  ll n=4,dem=0;
  for(int i=1;i<=n;i++) cin>>a[i];
  sort(a+1,a+n+1);
  for(int i=1;i<=n;i++)
  {
    if(a[i]==a[i+1])
    {
        dem++;
    }
  }
  cout<<dem;
  return 0;
}
