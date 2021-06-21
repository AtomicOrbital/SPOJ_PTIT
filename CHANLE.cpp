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
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if((i+1)%2==1)
        {
            ll res=(int)s[i]-'0';
            if(res%2==0)
            {
                     cout<<"NO"<<endl;
                     return ;
            }
        }
        else if((i+1)%2==0)
        {
            int res=(int)s[i]-'0';
            if(res%2==1)
            {
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
