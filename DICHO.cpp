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
vector<ll>f;
int main()
{
  ll y,k,n;
  cin>>y>>k>>n;
  ll kt=0;
  for(ll i=1;i<=n/k;i++)
  {
      if(k*i>y) {cout<<k*i-y<<" ";kt=1;}
  }
  if(kt==0) cout<<-1;
}
