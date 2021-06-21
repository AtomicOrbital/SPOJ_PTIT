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
   getline(cin,s);
   transform(s.begin(),s.end(),s.begin(),::tolower);
   ll dem=0,f[200]={0};
   for(int i=0;i<s.length();i++)
   {
       if(s[i]!=' ') f[(int)s[i]]++;
   }
   for(int i=0;i<s.length();i++)
   {
       if(f[(int)s[i]]>=2) {dem+=f[(int)s[i]];f[(int)s[i]]=0;}
   }
   cout<<dem<<" ";
   for(int i=0;i<s.length();i++)
   {
       if(s[i]!=' '&&f[(int)s[i]]==0) f[(int)s[i]]++;
   }
   for(int i=0;i<s.length();i++)
   {
      if(f[(int)s[i]]>=1&&s[i]!=' ') {cout<<s[i];f[(int)s[i]]=0;}
   }
   cout<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  cin.ignore();
  while(t--) xuly();
  return 0;
}
