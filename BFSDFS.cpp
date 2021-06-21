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
long long Dem(long long n,long long t)
{
if(n%t==1) return n/t+1;
if(n%t==0) return n;
return (n/t+1)*(n%t);
}
int main() {
long long n,m,t;
cin>>n>>m>>t;
cout<<Dem(n,t)*Dem(m,t);
}
