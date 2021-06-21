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
ll ngto(ll n)
{
    if(n<2) return 0;
    if(n<=3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
  ll n;
  cin>>n;
  if(ngto(n)) cout<<"YES";
  else cout<<"NO";
  return 0;
}
