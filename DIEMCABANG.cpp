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
  ll n,i=1;
  while(cin>>n)
  {
      if(n<0) break;
      vector<double>a;
      vector<double>b;
      vector<double>c;
      for(int i=0;i<n;i++)
      {
          double d,e,f;
          cin>>d>>e>>f;
          a.push_back(d);
          b.push_back(e);
          c.push_back(f);
      }
      cout<<"Case "<<i<<": ";
      double s=0,dem=0;
      for(int i=0;i<n;i++)
      {
        s+=a[i]*c[i];
        dem+=c[i];
      }
      cout<<fixed<<setprecision(2)<<s/dem<<" ";
      s=0;dem=0;
      for(int i=0;i<n;i++)
      {
          s+=b[i]*c[i];
          dem+=c[i];
      }
      cout<<fixed<<setprecision(2)<<s/dem<<endl;
      s=0;dem=0;
      a.clear();b.clear();c.clear();
      i++;
  }
}
