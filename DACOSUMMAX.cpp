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
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  ll am=0,duong=0,amax=-1e9,s=0,s1=0,sduong=0;
  f1(i,n)
  {
    ll a;
    cin>>a;
    s1+=a;
    if(s1<0) s1=0;
    else s=max(s,s1);
    if(a>=0)
    {
        duong=1;
        sduong+=a;
    }
    else
    {
        am=1;
        if(a>amax) amax=a;
    }
  }
  if(duong==0) cout<<amax<<" "<<amax;
  else if(am==0) cout<<sduong<<" "<<sduong;
  else cout<<s<<" "<<sduong;
  return 0;
}
