#include<bits/stdc++.h>
#define endl "\n"
#define fi first
#define se second
#define MP make_pair
using namespace std;
typedef long long LL;
const int N=2e3+5;
const int MOD=29;
int n;
long long f[N];
bool check(int x)
{
    for (int i=2;i<=sqrt(x);i++) if (x%i==0) return 0;
    return 1;
}
int Sum(int x)
{
    int sum=0;
    while (x) sum+=x%10,x/=10;
    return sum;
}
int main()
{
    cin>>n;
    f[1]=1;
    for (int i=2;i<=n;i++)
	{
        if (check(i)) f[i]=Sum(i);
        else
		{
            f[i]=1;
            for (int j=2;j<i;j++)
                if (i%j==0) f[i]*=f[j];
        }
    }
    cout<<f[n];
    return 0;
}
