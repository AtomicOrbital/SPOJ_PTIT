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
void xuly()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a==0&&(b==0||c==0)) cout<<"NO"<<endl;
    else
    {
        if(b==c) cout<<"YES"<<endl;
        else
        {
            ll t=abs(c-b);
            if(t%3==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
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
