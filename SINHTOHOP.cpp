#include<bits/stdc++.h>
#include<string>
#include<vector>
#define endl '\n'
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int a[N],n,k;
bool kt;
void ktao()
{
   cin>>n>>k;
   f1(i,k) a[i]=i;
}
void inra(int a[],int k)
{
    f1(i,k) cout<<a[i]<<" ";
    cout<<endl;
}
void sinhneo(int a[],int k,int n)
{
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i>0)
    {
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    }
    else kt=true;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t=1;
  while(t--)
  {
    ktao();
    kt=false;
    while(!kt)
    {
        inra(a,k);
        sinhneo(a,k,n);
    }
    cout<<endl;
  }
  return 0;
}
