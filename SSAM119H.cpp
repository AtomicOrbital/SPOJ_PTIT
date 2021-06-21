#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
const int N=1e6+3;
int amodb(string s,int a)
{
    int n=s.length();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=(ans*10+(int)s[i]-'\0');
    }
    return ans%a;
}
int mod(string s)
{
    int n=amodb(s,4);
    int ans=1+pow(2,n)+pow(3,n)+pow(4,n);
    return ans%5;
}
void xuly()
{
    string s;
    cin>>s;
    cout<<mod(s)<<endl;
}
int main()
{
  int t,i;
  cin>>t;
  for(i=1;i<=t;i++) xuly();
  return 0;
}
