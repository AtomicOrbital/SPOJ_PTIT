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
ll gcd(ll a,ll b)
{
    if(a==0||b==0) return (a+b);
    return gcd(b,a%b);
}
void xuly()
{
        ll a;
        cin>>a;
        a%=360;
        ll x=a,y=180;
        x/=gcd(a,180);
        y/=gcd(a,180);
        if(x==1&&y>1) cout<<"$/"<<y<<endl;
        else if(x>y&&y>1)
        {
            while(x>2*y) x-=2*y;
            if(x==1) cout<<"$/"<<y<<endl;
            else cout<<x<<"$/"<<y<<endl;
        }
        else if(y==1)
        {
            if(x%2==0) cout<<"0$"<<endl;
            else cout<<"$"<<endl;
        }
        else if(x<y&&y>1) cout<<x<<"$/"<<y<<endl;
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
