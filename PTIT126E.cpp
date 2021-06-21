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
int main()
{
  string s;
  while(cin>>s)
  {
      if(s[0]=='#') break;
      ll len=s.length();
      ll y=0,n=0,p=0,a=0;
      for(int i=0;i<len;i++)
      {
        if(s[i]=='Y') y++;
        else if(s[i]=='N') n++;
        else if(s[i]=='P') p++;
        else a++;
      }
      if(len%2==0&&a>=len/2) cout<<"need quorum"<<endl;
      else if(len%2==1&&a>(len-1)/2) cout<<"need quorum"<<endl;
      else if(y>n) cout<<"yes"<<endl;
      else if(n>y) cout<<"no"<<endl;
      else if(y==n) cout<<"tie"<<endl;

  }
}
