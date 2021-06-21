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
int main()
{
   ll n,k;
   cin>>n>>k;
   if(n%2==0)
   {
       if(k<=n/2)
       {
           cout<<2*k-1;
       }
       else
       {
           cout<<2*k-n;
       }
   }
   else
   {
       if(k<=n/2+1)
       {
           cout<<2*k-1;
       }
       else
       {
         cout<<2*k-(n+1);
       }
   }
}
