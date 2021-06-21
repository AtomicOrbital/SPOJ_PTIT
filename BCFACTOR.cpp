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
 ll n,dem;
 cin>>n;
 for(int i=2;i<=sqrt(n);i++)
 {
     dem=0;
     if(n%i==0)
     {
         while(n%i==0)
         {
             dem++;
             n/=i;
         }
         cout<<i<<" "<<dem<<endl;
     }
 }
 if(n>1) cout<<n<<" "<<1;
 return 0;
}
