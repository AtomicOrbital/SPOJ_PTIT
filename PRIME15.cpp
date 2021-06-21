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
ll uoc(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      f(i,1,n)
      {
          cout<<uoc(i)<<" ";
      }
      cout<<endl;
  }
  return 0;
}
