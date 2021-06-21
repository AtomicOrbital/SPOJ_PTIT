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
struct xuly
{
  int gio,phut,giay;
};
bool ss(xuly a,xuly b)
{
    if(a.gio!=b.gio) return a.gio<b.gio;
    else if(a.gio==b.gio)
    {
        if(a.phut==b.phut) return a.giay<b.giay;
        else return a.phut<b.phut;
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  vector<xuly>a(n+1);
  for(int i=1;i<=n;i++) cin>>a[i].gio>>a[i].phut>>a[i].giay;
  sort(a.begin(),a.end(),ss);
  for(int i=1;i<=n;i++)
  {
      cout<<a[i].gio<<" "<<a[i].phut<<" "<<a[i].giay<<endl;
  }
  return 0;
}
