#include<bits/stdc++.h>
#include<string>
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
  int t;
  cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      for(int i=1;i<=(n-1)/9;i++) cout<<"123456790";
      ll t=(n-1)%9;
      for(int i=1;i<=t;i++) cout<<(char)(48+i);
      for(int i=t+1;i>=2;i--) cout<<(char)(48+i);
      for(int i=1;i<=(n-1)/9;i++) cout<<"098765432";
      cout<<1<<endl;
  }
}
