#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
  if(b) return gcd(b,a%b);
  return a;
}
int main()
{
    int a,b,n,m,t;
    cin>>n>>m;
    cin>>a;
    for(int i=1;i<=n;i++) cin>>t;
    cin>>b;
    for(int i=1;i<=m;i++) cin>>t;;
    if(n==m)
    {
        t=gcd(a,b);
        if(t*b<0) t=-t;
        a=a/t;b=b/t;
        cout<<a<<"/"<<b;;
    }
    else if(n>m) cout<<(a*b>0?"Infinity":"-Infinity");
    cout<<"0/1";
}
