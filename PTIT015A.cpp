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
    string a,b,c;
    cin>>a>>b>>c;
    ll f[1000],m=0;
    for(int i=0;i<a.length();i++)
    {
        f[++m]=((int)a[i]-48)-'\0';
    }
    for(int i=0;i<b.length();i++)
    {
        f[++m]=((int)b[i]-48)-'\0';
    }
    for(int i=0;i<c.length();i++)
    {
        f[++m]=((int)c[i]-48)-'\0';
    }
    sort(f+1,f+m+1);
    for(int i=m;i>=1;i--) cout<<f[i];
    cout<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
}
