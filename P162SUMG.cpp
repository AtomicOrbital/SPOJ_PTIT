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
  getline(cin,s);
  ll dem1=0,dem2=0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]>='A'&&s[i]<='Z') dem1++;
    else dem2++;
  }
  if(dem1>dem2)
  {
      transform(s.begin(),s.end(),s.begin(),::toupper);
  }
  else transform(s.begin(),s.end(),s.begin(),::tolower);
  cout<<s;
}
