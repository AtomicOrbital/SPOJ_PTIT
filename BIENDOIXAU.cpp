#include<bits/stdc++.h>
using namespace std;
string HV_kt (string s)
{
    int n=s.length();
    int i=n-1-1;
    while (i>=0&&s[i]>=s[i+1]) i--;
    if (i>=0)
    {
        int vt;
        for (int j=n-1;j>=0;j--)
            if (s[j]>s[i])
            {
                vt=j;
                break;
            }

        char tmp=s[vt];
        s[vt]=s[i];
        s[i]=tmp;
        int l=i+1,r=n-1;
        while l<=r)
        {
            tmp=s[l];
            s[l]=s[r];
            s[r]=tmp;
            l++;
            r--;
        }
        return s;
    }
    return "BIGGEST";
}
int main ()
{
    int t;
    cin>>t;
    string s;
    while (1)
    {
        if (t==0) break;
        t--;
        cin>>s;
        cout<<HV_kt (s)<<endl;
    }
    return 0;
}
