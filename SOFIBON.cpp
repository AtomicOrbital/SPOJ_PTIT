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
struct mtrix
{
    ll c[2][2];
    mtrix()
    {
        c[0][0]=0;
        c[0][1]=1;
        c[1][0]=1;
        c[1][1]=1;
    }
};
mtrix operator*(mtrix a,mtrix b)
{
    mtrix res;
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            res.c[i][j]=0;
            for(int k=0;k<=1;k++)
            {
                res.c[i][j]=(res.c[i][j]+a.c[i][k]*b.c[k][j])%MOD;
            }
        }
    }
    return res;
}
mtrix poww(mtrix a,ll n)
{
    if(n==1) return a;
    if(n%2!=0) return poww(a,n-1)*a;
    mtrix res=poww(a,n/2);
    return res*res;
}
void xuly()
{
    ll n;
    cin>>n;
    mtrix a;
    a=poww(a,n);
    cout<<a.c[0][1]<<endl;
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
