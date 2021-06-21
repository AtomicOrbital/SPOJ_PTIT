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
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
int main()
{
   ll n,m;
   cin>>n>>m;
   vector<int>a;
   vector<int>b;
   for(int i=1;i<=n+1;i++)
   {
       int h;
       cin>>h;
       a.push_back(h);
   }
   for(int i=1;i<=m+1;i++)
   {
       int h;
       cin>>h;
       b.push_back(h);
   }
   ll ans=gcd(a[0],b[0]);
   if(n>m)
   {
       if((a[0]*b[0])>0) cout<<"Infinity";
       else if((a[0]*b[0])<0) cout<<"-Infinity";
   }
   else if(n<m) cout<<"0/1";
   else if(n==m)
   {
     a[0]/=ans;
     b[0]/=ans;
     cout<<a[0]<<"/"<<b[0];
   }
   return 0;
}
