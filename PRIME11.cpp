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
bool ngto(ll n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
ll lt(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a;
    ll m=lt(a,b/2);
    if(b%2==0) return m*m;
    return m*m*a;
}
void xuly()
{
    ll n,kt=0;
    cin>>n;
    for(int i=2;i<=20;i++)
    {
        if(ngto(i)&&ngto(lt(2,i)-1))
        {
            if(lt(2,2*i)-lt(2,i)==2*n)
            {
                kt=1;
                break;
            }
        }
    }
    if(kt==1) cout<<1<<endl;
    else cout<<0<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
