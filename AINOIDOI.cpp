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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  string s,s1;
  getline(cin,s);
  getline(cin,s1);
  ll n1=s1.length(),n2=s.length();
  ll ans=abs(n1-n2);
  if(ans>=n) cout<<"NO";
  else cout<<"YES";
  return 0;
}
