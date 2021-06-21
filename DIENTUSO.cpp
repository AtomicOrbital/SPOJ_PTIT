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
   string s;
   cin>>s;
   if(s.length()<2) s.insert(s.begin(),'0');
   ll dem=1;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='0') dem*=2;
       if(s[i]=='1') dem*=7;
       if(s[i]=='2') dem*=2;
       if(s[i]=='3') dem*=3;
       if(s[i]=='4') dem*=3;
       if(s[i]=='5') dem*=4;
       if(s[i]=='6') dem*=2;
       if(s[i]=='7') dem*=5;
       if(s[i]=='8') dem*=1;
       if(s[i]=='9') dem*=2;
   }
   cout<<dem<<endl;
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
