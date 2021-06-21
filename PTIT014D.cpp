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
void xuly()
{
    string s;
    cin>>s;
    ll m=0;
    for(int i=0;i<s.length();i++)
    {
        m+=((int)s[i]-48)-'\0';
    }
    if((m==9||m%9==0)&&m>0) cout<<1<<endl;
    else cout<<0<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
