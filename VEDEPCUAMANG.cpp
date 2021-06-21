#include<bits/stdc++.h>
#include<string>
#include<vector>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
const ld pi=2*acos(0);
const ll inf =LLONG_MAX;
const ll ninf=LLONG_MIN;
const int oo=INT_MAX;
const int noo=INT_MIN;
const int N=1e6+3;
const int MOD=1e9+7;
void xuly()
{
   ll n;
   cin>>n;
   ll s1=0,s=0,amx=-1e9,duong=0,am=0,sd=0;
   f1(i,n)
   {
       ll a;
       cin>>a;
       s1+=a;
       if(s1<0) s1=0;
       s=max(s1,s);
       if(a>0)
       {
         duong=1;
         sd+=a;
       }
       if(a<0)
       {
           am=1;
           amx=max(amx,a);
       }
   }
   if(duong==0) cout<<amx;
   else if(am==0) cout<<sd;
   else if(duong==1&&am==1) cout<<s;
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
