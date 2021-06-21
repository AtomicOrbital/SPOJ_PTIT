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
void xuly()
{
    ll w,h,k,dem=1;
    cin>>w>>h>>k;
    if(w%2==1&&h%2==1&&k==1) {cout<<"YES"<<endl;return;}
    if(w%2==1&&h%2==1&&k>1) {cout<<"NO"<<endl;return;}
    while(w%2==0)
    {
      dem*=2;
      w/=2;
    }
    while(h%2==0)
    {
        dem*=2;
        h/=2;
    }
    if(dem>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
