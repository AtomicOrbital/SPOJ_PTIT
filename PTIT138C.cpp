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
ll a[N],b[N];
void xuly()
{
    string s;
    cin>>s;
    ll m=0,n=0,x=0;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A'||s[i]=='B'||s[i]=='C') a[++m]=2;
        if(s[i]=='D'||s[i]=='E'||s[i]=='F') a[++m]=3;
        if(s[i]=='G'||s[i]=='H'||s[i]=='I') a[++m]=4;
        if(s[i]=='J'||s[i]=='K'||s[i]=='L') a[++m]=5;
        if(s[i]=='M'||s[i]=='N'||s[i]=='O') a[++m]=6;
        if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S') a[++m]=7;
        if(s[i]=='T'||s[i]=='U'||s[i]=='V') a[++m]=8;
        if(s[i]=='W'||s[i]=='X'||s[i]=='Y'|s[i]=='Z') a[++m]=9;
    }
    for(int i=m;i>=1;i--) b[++n]=a[i];
    for(int i=1;i<=m;i++)
    {
      x+=abs(b[i]-a[i]);
    }
    if(x==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++) xuly();
  return 0;
}
