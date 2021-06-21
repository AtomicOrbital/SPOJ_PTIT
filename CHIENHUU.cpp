#include<bits/stdc++.h>
#include<string>
#include<vector>
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
int n,a,b,t;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>t;
  while(t--)
  {
       cin>>n>>a>>b;
       bool kt=false;
       if(a<b) swap(a,b);
       int x=n/a;
       for(int i=x;i>=0;i--)
       {
           int c=n-a*i;
           if(c%b==0)
           {
              kt=true;
              int y=c/b;
              cout<<y+i<<endl;
              break;
           }
       }
       if(kt==false) cout<<-1<<endl;
  }
  return 0;
}
