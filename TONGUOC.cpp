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
const int MOD=1073741824;
vector<ll>d;
vector<ll>d1[102];// co 102 vector
void snt()
{
  for(int i=2;i<=100;i++)
  {
      ll x=i;
      for(int j=2;j*j<=x;j++)
      {
         while(x%j==0)
         {
             d1[i].push_back(j);
             x/=j;
         }
      }
      if(x>1) d1[i].push_back(x);
  }
}
void xuly()
{
  snt();
  ll a,b,c;
  cin>>a>>b>>c;
  ll ans=1,s=0;
  /*for(int i=2;i<=100;i++)
  {
      for(auto x:d1[i]) cout<<x<<" ";
      cout<<endl;
  }*/
  for(int i=1;i<=a;i++)
  {
      for(int j=1;j<=b;j++)
      {
          for(int k=1;k<=c;k++)
          {
              vector<ll>a1;
              ll ans=1;
              if(i*j*k==1) {s+=1;continue;}
              for(auto x:d1[i]) a1.push_back(x);
              for(auto x:d1[j]) a1.push_back(x);
              for(auto x:d1[k]) a1.push_back(x);
              sort(a1.begin(),a1.end());
              ll dem=1;
              for(int x=1;x<a1.size();x++)
              {
                 if(a1[x]==a1[x-1])
                 {
                     dem++;
                 }
                 else ans=(ans*(dem+1))%MOD,dem=1;
              }
              ans=(ans*(dem+1))%MOD;
              s=(s+ans)%MOD;
          }
      }
  }
  cout<<s;
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
