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
ll a[N];
void xuly()
{
  ll n;
  cin>>n;
  for(int i=0;i<n;i++) a[i]=0;
  int i;
  for(i=0;i<n;i++) cout<<a[i];
  cout<<" ";
  for(i=n-1;i>=0;i--)
    {
        if(a[i]==0)
        {
            a[i]=1;
            int j;
            for(j=i+1;j<n;j++)
            {
                a[j]=0;
            }
            for(j=0;j<n;j++)
            {
                cout<<a[j];
            }
            cout<<" ";
            i=n;
        }
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) xuly();
}
