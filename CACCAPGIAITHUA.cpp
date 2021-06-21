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
ll f[15]={0};
void xuly()
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='2') f[2]++;
    if(s[i]=='3') f[3]++;
    if(s[i]=='4') {f[3]++;f[2]+=2;}
    if(s[i]=='5') f[5]++;
    if(s[i]=='6') {f[5]++;f[3]++;}
    if(s[i]=='7') f[7]++;
    if(s[i]=='8') {f[7]++;f[2]+=3;}
    if(s[i]=='9') {f[7]++;f[3]+=2;f[2]++;}
  }
  for(int i=10;i>=0;i--)
  {
      if(f[i])
      {
          while(f[i])
          {
              cout<<i;
              f[i]--;
          }
      }
  }
  cout<<endl;
}
main()
{
    int t;
    cin>>t;
    while(t--) xuly();
}
