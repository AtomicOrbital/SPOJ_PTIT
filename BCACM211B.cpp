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
ll a[1000][1000];
void xuly()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll d=0,gt=1,cot=n-1,hang=n-1;
    while(d<=n/2)
    {
        for(int i=d;i<=cot;i++) a[d][i]=gt++;
        for(int i=d+1;i<=hang;i++) a[i][cot]=gt++;
        for(int i=cot-1;i>=d;i--) a[hang][i]=gt++;
        for(int i=hang-1;i>d;i--) a[i][d]=gt++;
        d++;hang--;cot--;
    }
    cout<<a[x-1][y-1]<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
