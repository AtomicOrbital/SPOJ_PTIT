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
ll a[N];
void xuly()
{
  ll n,s=0;
  cin>>n;
  f1(i,n) {cin>>a[i];s+=a[i];}
  if(s==0) {cout<<-1<<endl;return;}
  sort(a+1,a+n+1,greater<ll>());
  if(s%3==0&&s>0)
  {
      f1(i,n) cout<<a[i];
      cout<<endl;
  }
  else if(s%3==1)
  {
    ll pos=-5;
    for(int i=n;i>=1;i--)
    {
        if(a[i]%3==1)
        {
            pos=i;
            break;
        }
    }
    if(pos!=-5)
    {
        for(int i=1;i<=pos-1;i++) cout<<a[i];
        for(int i=pos+1;i<=n;i++) cout<<a[i];
        cout<<endl;
    }
    else
    {
        ll pos2=-10,pos3=-10;
        for(int i=n;i>=1;i--)
        {
            if(a[i]%3==2)
            {
                pos2=i;
                break;
            }
        }
        for(int i=pos2-1;i>=1;i--)
        {
            if(a[i]%3==2)
            {
                pos3=i;
                break;
            }
        }
        if(pos2!=-10&&pos3!=-10&&n>=3)
        {
           for(int i=1;i<=pos2-1;i++) cout<<a[i];
           for(int i=pos2+1;i<=pos3-1;i++) cout<<a[i];
           for(int i=pos3+1;i<=n;i++) cout<<a[i];
           cout<<endl;
        }
        else cout<<-1<<endl;
    }
  }
  else if(s%3==2)
  {
        ll pos=-5;
        for(int i=n;i>=1;i--)
        {
            if(a[i]%3==2)
            {
                pos=i;
                break;
            }
        }
        if(pos!=-5)
        {
            for(int i=1;i<=pos-1;i++) cout<<a[i];
            for(int i=pos+1;i<=n;i++) cout<<a[i];
            cout<<endl;
        }
        else
        {
            ll pos2=-10,pos3=-10;
            for(int i=n;i>=1;i--)
            {
                if(a[i]%3==1)
                {
                    pos2=i;
                    break;
                }
            }
            for(int i=pos2-1;i>=1;i--)
            {
                if(a[i]%3==1)
                {
                    pos3=i;
                    break;
                }
            }
            if(pos2!=-10&&pos3!=-10&&n>=3)
            {
               for(int i=1;i<=pos2-1;i++) cout<<a[i];
               for(int i=pos2+1;i<=pos3-1;i++) cout<<a[i];
               for(int i=pos3+1;i<=n;i++) cout<<a[i];
               cout<<endl;
            }
            else cout<<-1<<endl;
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
