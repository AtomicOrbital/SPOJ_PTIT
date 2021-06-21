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
string s;
ll res=0;
int kt(char c)
{
    if(c=='_') return 0;
    if(c=='L') return 1;
    if(c=='A'||c=='O'||c=='U'||c=='E'||c=='I') return 2;//nguyen am
    return 3;//phu am
}
void quay(int i,ll na,ll pa,ll l,ll dem)
{
    //pa or na la day pa or na lien tiep nhau va max nhat la 2
    if(i==s.size())
    {
        if(l>0) res+=dem;
        return;
    }
    if(kt(s[i]))
    {
        if(kt(s[i])==1&&pa<2) quay(i+1,0,pa+1,l+1,dem);//L
        else if(kt(s[i])==2&&na<2) quay(i+1,na+1,0,l,dem);//nguyen am
        else if(kt(s[i])==3&&pa<2) quay(i+1,0,pa+1,l,dem);//phu am
    }
    else
    {
        if(na<2) quay(i+1,na+1,0,l,dem*5);
        if(pa<2) quay(i+1,0,pa+1,l+1,dem);
        if(pa<2) quay(i+1,0,pa+1,l,dem*20);
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin>>s;
  quay(0,0,0,0,1);
  cout<<res;
  return 0;
}
