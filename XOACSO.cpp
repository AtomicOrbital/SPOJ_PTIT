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
ll a[N],m=0,f[N]={0};
int main()
{
 ll n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 for(int i=0;i<s.length();i++)
 {
   a[++m]=(int)s[i]-48-'\0';
   f[(int)s[i]-48]=i+1;
 }
 sort(a+1,a+m+1);
 for(int i=n-k+1;i<=m;i++)
 {
   for(int j=i+1;j<=m;j++)
   {
       if(f[a[j]]<f[a[i]]) swap(a[j],a[i]);
   }
 }
 for(int i=n-k+1;i<=m;i++) cout<<a[i];
}
