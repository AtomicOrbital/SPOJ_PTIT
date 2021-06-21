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
  cin>>s;
  while(s.length()%3!=0)
  {
      s='0'+s;
  }
  string r;
  for(int i=0;i<s.length();i+=3)
  {
      r="";
      for (int j=i;j<i+3;j++)
      {
        r+=s[j];
      }
        if (r=="000") cout<<"0";
        if (r=="001") cout<<"1";
        if (r=="010") cout<<"2";
        if (r=="011") cout<<"3";
        if (r=="100") cout<<"4";
        if (r=="101") cout<<"5";
        if (r=="110") cout<<"6";
        if (r=="111") cout<<"7";
  }
}
