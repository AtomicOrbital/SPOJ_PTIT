#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int main()
{
    int n;
    cin>>n;
    int mang[n];
    int i;
    for(i = 0; i < n; i++)
    {
        mang[i] = i + 1;
        cout<<mang[i];
    }
    for(i = n - 1; i > 0; i--)
    {
        if(mang[i] > mang[i - 1])
        {
            int j;
            for(j = n - 1; j >= i; j--)
            {
                if(mang[j] > mang[i - 1])
                {
                    int temp = mang[j];
                    mang[j] = mang[i - 1];
                    mang[i - 1] = temp;
                    break;
                }
            }
            for(j = n - 1; j > ((n - 1 + i) / 2); j--)
            {
                int temp = mang[i + n - 1 - j];
                mang[i + n - 1 - j] = mang[j];
                mang[j] = temp;
            }
            cout<<endl;
            for(j = 0; j < n; j++)
            {
                cout<<mang[j];
            }
            i = n;
        }
    }
    return 0;
}
