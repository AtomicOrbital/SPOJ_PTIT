#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+5;
bool ngto(ll n)
{
  if(n<2) return false;
  for(int i=2;i<=sqrt(n);i++)
  {
      if(n%i==0) return false;
  }
  return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r,dem=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            if(ngto(i)) dem++;
        }
        cout<<dem<<endl;
    }
}
