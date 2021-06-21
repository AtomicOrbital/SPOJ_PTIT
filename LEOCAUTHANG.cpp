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
   ll n,m;
   cin>>n>>m;
   if(n<m) {cout<<-1;return;}
   for(int i=1;i<=n;i++)
   {
       ll x=(n-i)/2;
       if((x+i)%m==0)
       {
           cout<<x+i;
           return ;
       }
   }
   cout<<-1;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}
