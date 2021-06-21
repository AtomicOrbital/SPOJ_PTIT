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
int a[N];
void inra(int a[],int n)
{
    f0(i,n) cout<<a[i];
    cout<<endl;
}
void sinhhv(int a[],int n)
{
    while(1)
    {
        inra(a,n);
        int k,l;
        for(k=n-2;k>=0;k--) if(a[k]<a[k+1]) break;
        if(k<0) break;
        for(l=n-1;l>=k+1;l--) if(a[k]<a[l]) break;
        swap(a[l],a[k]);
        for(int i=k+1,j=n-1;i<j;i++,j--) swap(a[i],a[j]);
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  f0(i,n) a[i]=i+1;
  sinhhv(a,n);
  return 0;
}
