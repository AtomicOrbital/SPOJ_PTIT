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
ll n,c[N],xuoi[N],nguoc[N],dem=0;
void quaylui(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(c[j]&&xuoi[i+j-1]&&nguoc[i-j+n])
        {
            c[j]=xuoi[i+j-1]=nguoc[i-j+n]=0;
            if(i==n) dem++;
            else quaylui(i+1);
            c[j]=xuoi[i+j-1]=nguoc[i-j+n]=1;
        }
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin>>n;
  f1(i,n) c[i]=1;
  f1(i,2*n-1)
  {
      xuoi[i]=1;
      nguoc[i]=1;
  }
  quaylui(1);
  cout<<dem;
  return 0;
}
