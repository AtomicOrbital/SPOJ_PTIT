#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
//P205PROE
ll n;
string s1,s2;
void xuly()
{
   cin>>n;
   cin>>s1>>s2;
   int res=0;
   for(int i=0;i<s1.length();i++)
   {
       int tmp=min(abs(s1[i]-(10+s2[i])),abs((10+s1[i])-s2[i]));
       res+=min(tmp,abs(s1[i]-s2[i]));
   }
   cout<<res;
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
