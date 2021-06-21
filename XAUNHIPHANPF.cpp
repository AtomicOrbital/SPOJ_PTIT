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
//P202PROG
void xuly()
{
   string s;
   cin>>s;
   if(s.length()<3) cout<<0<<endl;
   else
   {
       ll d0=0,d1=0;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='1') d1++;
           else d0++;
       }
       ll res=min(d0,d1);
       s=" "+s;
       ll dp0[s.length()]={0};
       ll dp1[s.length()]={0};
       dp0[0]=0;
       dp1[0]=0;
       for(int i=1;i<s.length();i++)
       {
           dp0[i]=dp0[i-1];
           dp1[i]=dp1[i-1];
           if(s[i]=='0')
           {
               d0--;
               dp1[i]++;
           }
           else
           {
               d1--;
               dp0[i]++;
           }
           res=min(res,dp0[i]+d0);
           res=min(res,dp1[i]+d1);
       }
       en(res);
   }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
