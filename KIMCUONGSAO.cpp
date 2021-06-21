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
  vector<string>x;
  vector<string>y;
  //string x="",y="D";
  for(int i=1;i<=(n-1)/2;i++)
  {
      x.push_back("*");
  }
  y.push_back("D");
  for(int i=0;i<x.size();i++) cout<<x[i];
  for(int i=0;i<y.size();i++) cout<<y[i];
  for(int i=0;i<x.size();i++) cout<<x[i];
  cout<<endl;
  for(int i=1;i<=(n-1)/2;i++)
  {
      x.erase(x.begin()+0);
      y.push_back("D");
      y.push_back("D");
      for(int i=0;i<x.size();i++) cout<<x[i];
      for(int i=0;i<y.size();i++) cout<<y[i];
      for(int i=0;i<x.size();i++) cout<<x[i];
      cout<<endl;
  }
  for(int i=1;i<=(n-1)/2;i++)
  {
      y.erase(y.begin()+0,y.begin()+2);
      x.push_back("*");
      for(int i=0;i<x.size();i++) cout<<x[i];
      for(int i=0;i<y.size();i++) cout<<y[i];
      for(int i=0;i<x.size();i++) cout<<x[i];
      cout<<endl;
  }
  return 0;
}
