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
ll a[N],b[N],c[N]={0},d[N]={0},dem=0;
void xuly()
{
   ll n,k;
   cin>>n>>k;
   f0(i,n) cin>>a[i];
   f0(i,n) cin>>b[i];
   sort(a,a+n);
   sort(b,b+n);
   k=abs(k);
   ll x,y;
   f0(i,n)
   {
       f0(j,n)
       {
           if(a[i]==b[j]&&c[j]==0)
           {
               dem++;
               c[j]=1;
               d[i]=1;
               break;
           }
       }
   }
   f0(i,n)
   {
       if(c[i]==0)
       {
           y=i;
           break;
       }
   }
   f0(i,n)
   {
       if(d[i]==0)
       {
           x=i;
           break;
       }
   }
   ll d=n-dem;
   if(d>1) cout<<"NO";
   else
   {
       if(d==1)
       {
           if((b[x]-a[y])<=k&&(b[x]-a[y])>=-k) cout<<"YES";
           else cout<<"NO";
       }
       else cout<<"YES";
   }
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
