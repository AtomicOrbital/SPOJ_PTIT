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
void xuly()
{
  ll n,k,pos2,pos1;
  cin>>n>>k;
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='G')
    {
        pos1=i;
    }
    if(s[i]=='T')
    {
        pos2=i;
    }
  }
  if(pos1<pos2)
  {
    ll movee=pos1;
    while(1)
    {
        if(s[movee]=='#')
        {
            cout<<"NO";
            return;
        }
        if(movee==pos2)
        {
            cout<<"YES";
            return;
        }
        if(movee>pos2)
        {
            cout<<"NO";
            return;
        }
        movee+=k;
    }
  }
  else
  {
      ll movee=pos1;
      while(1)
      {
          if(s[movee]=='#')
          {
              cout<<"NO";
              return;
          }
          if(movee==pos2)
          {
              cout<<"YES";
              return;
          }
          if(movee<pos2)
          {
              cout<<"NO";
              return;
          }
          movee-=k;
      }
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
