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
const int N=1e7+3;
const ll MOD=1e13+7;
ll mang[N];
void xuly()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        mang[i]=i+1;
        cout<<mang[i];
    }
    for(int i=n-1;i>0;i--)
    {
        if(mang[i]>mang[i-1])
        {
            for(int j=n-1;j>=i;j--)
            {
                if(mang[j]>mang[i-1])
                {
                    swap(mang[j],mang[i-1]);
                    break;
                }
            }
            for(int j=n-1;j>((n-1+i)/2);j--)
            {
                ll temp=mang[i+n-1-j];
                mang[i+n-1-j]=mang[j];
                mang[j]=temp;
            }
            cout<<" ";
            for(int j=0;j<n;j++)
            {
                cout<<mang[j];
            }
            i=n;
        }
    }
    cout<<endl;
}
int main()
{
    int t=1;
    //cin>>t;
    while(t--) xuly();
    return 0;
}
