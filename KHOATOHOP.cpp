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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  while(1)
  {
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      if(a==0&&b==0&&c==0&&d==0) break;
      ll s=a-1;
      s+=3*a;
      if(b<c) s+=c-b;
      else s+=(a-b+c);
      if(c>d) s+=c-d;
      else s+=(a-d+c);
      cout<<s<<endl;
  }
  return 0;
}
