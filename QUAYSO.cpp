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
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll dem=0;
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
      if(s[i]=='A'||s[i]=='B'||s[i]=='C') dem+=3;
      if(s[i]=='D'||s[i]=='E'||s[i]=='F') dem+=4;
      if(s[i]=='G'||s[i]=='H'||s[i]=='I') dem+=5;
      if(s[i]=='J'||s[i]=='K'||s[i]=='L') dem+=6;
      if(s[i]=='M'||s[i]=='N'||s[i]=='O') dem+=7;
      if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S') dem+=8;
      if(s[i]=='T'||s[i]=='U'||s[i]=='V') dem+=9;
      if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z') dem+=10;
  }
  cout<<dem;
  return 0;
}
