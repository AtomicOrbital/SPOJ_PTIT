#include<bits/stdc++.h>
#define endl "\n"
#define fi first
#define se second
#define MP make_pair
using namespace std;
typedef unsigned long long int ull;
typedef long long LL;
const int N = 2e3 + 5;
const int MOD = 29;
int n,mx=0;
int a[N],b[N],c[N];
string s[N];
int main()
{
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++)
	{
        getline(cin,s[i]);
    }
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++)
	{
        cin>>c[i];
        mx =max(mx,a[i]+b[i]+c[i]);
    }
    for (int i=1;i<=n;i++)
        if ( mx==a[i]+b[i]+c[i])
            cout<<s[i]<<" "<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    return 0;
}
