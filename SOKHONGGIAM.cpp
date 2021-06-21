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
bool tang(string s)
{
    for(int i=1;i<s.length();i++)
    {
        if(s[i]<s[i-1]) return false;
    }
    return true;
}
ll strtonum(string s)
{
    ll a=0;
    for(int i=0;i<s.length();i++)
    {
        int k=(int)s[i]-'0';
        a=a*10+k;
    }
    return a;
}
void xuly()
{
    string s;
    cin>>s;
    if(!tang(s)) cout<<-1<<endl;
    else
    {
        if(s=="0") {cout<<0<<endl;return;}
        ll dem=1;
        ll ans=strtonum(s);
        for(int i=1;i<=ans-1;i++)
        {
            ll a[100],x=i,m=0,kt=1;
            while(x%10==0)
            {
               a[++m]=x%10;
               x/=10;
            }
            while(x!=0)
            {
                a[++m]=x%10;
                x/=10;
            }
            for(int j=m;j>=2;j--)
            {
                if(a[j]>a[j-1])
                {
                    kt=0;
                    break;
                }
            }
            if(kt==1) dem++;
        }
        cout<<dem<<endl;
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
