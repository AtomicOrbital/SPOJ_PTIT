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
string al=ALPHAA;
string s;
ll n,k,res=0;
ll a[26]={0};
void xuly()
{
  cin>>n>>k>>s;
  for(int i=0;i<s.length();i++)
  {
      for(int j=0;j<al.length();j++)
      {
          if(s[i]==al[j])
          {
              a[j]++;
              break;
          }
      }
  }
  priority_queue<ll> heap;
  for(int i=0;i<26;i++) heap.push(a[i]);
  while(heap.size())
  {
      if(k==0) break;
      ll u=heap.top();
      if(u<=k)
      {
          res+=u*u;
          k-=u;
          heap.pop();
      }
      else
      {
          res+=k*k;
          k=0;
      }
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
