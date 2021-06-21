#include<bits/stdc++.h>
#include<string>
#include<vector>
#define endl '\n'
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
ll a[]={2,3,5,7,11,13,17,19,23,29,31};
ll n,res;
void quay(int i,ll s,ll uoc)
{
    if(uoc>n) return;
    if(uoc==n) res=min(res,s);
    for(int j=1;;j++)
    {
        if(s*a[i]>=res) break;
        s*=a[i];
        quay(i+1,s,uoc*(j+1));
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>n;
  res=1e18;
  quay(0,1,1);
  cout<<res;
  return 0;
}
