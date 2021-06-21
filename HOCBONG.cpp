#include<bits/stdc++.h>
using namespace std;
main ()
{
    long n;
    cin>>n;
    long long t[n];
    for (int i=0;i<n;i++) cin>>t[i];
    sort (t, t+n);
    long dem=1;
    for (int i=1;i<n;i++)
    {
        long long s=0;
        for (int j=0;j<i;j++)
        {
            s=s+t[j];
        }
        if (s<=t[i])
        {
            dem++;
        }
        else
        {
            t[i]=0;
        }
    }
    cout<<dem;
}
