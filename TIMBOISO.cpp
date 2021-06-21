#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<queue>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
#define MAX_COUNT 10000
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
vector<string>vec;
queue<string>q;
void gene()
{
    q.push("9");
    for (int i=MAX_COUNT;i>0;i--)
    {
        string s1=q.front();
        q.pop();
        vec.push_back(s1);
        string s2=s1;
        q.push(s1.append("0"));
        q.push(s2.append("9"));
    }
}
ll powmod(string a,ll n)
{
    ll res=0,num=0;
    for(int i=0;i<a.length();i++)
    {
       num=res*10+a[i]-'0';
       res=num%n;
    }
    return res;
}
void xuly()
{
    gene();
    ll n;
    cin>>n;
    for(int i=0;i<vec.size();i++)
    {
        if (powmod(vec[i],n)==0)
        {
          cout<<vec[i]<<endl;
          return;
        }
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) xuly();
  return 0;
}
