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
string xoa(string s,int x)
{
  for(int i=x-1;i<s.length();i++)
  {
      s[i]=s[i+1];
  }
  return s;
}
int main()
{
  string s;
  cin>>s;
  transform(s.begin(),s.end(),s.begin(),::tolower);
  for(int i=0;i<s.length();i++)
  {
    if(s[i]!='a'&&s[i]!='i'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u')
    {
        cout<<"."<<s[i];
    }
  }
  return 0;
}
