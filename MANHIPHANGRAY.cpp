#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<stack>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
void xuly()
{
  ll n;
  cin>>n;
  vector<string>s;
  s.push_back("0");
  s.push_back("1");
  for(int i=2;i<pow(2,n);i*=2)
  {
    for(int j=i-1;j>=0;j--) s.push_back(s[j]);
    for(int j=0;j<i;j++) s[j]="0"+s[j];
    for(int j=i;j<2*i;j++) s[j]="1"+s[j];
  }
  for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
  cout<<endl;
}
main()
{
    int t;
    cin>>t;
    while(t--) xuly();
}
