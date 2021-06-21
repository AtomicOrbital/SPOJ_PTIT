#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct xau
{
    string x;
} typedef xau;
int ssXau (xau a, xau b)
{
    //Make same as length =102;
    while (a.x.length()!=102) a.x='0'+a.x;
    while (b.x.length()!=102) b.x='0'+b.x;
    for (int i=0; i<102; i++)
    {
        int ai=a.x[i]-'0';
        int bi=b.x[i]-'0';
        if (ai>bi) return 0;
        if (ai<bi) return 1;
    }
    return 1;
}
string chXau (string a) //chuan hoa Xau
{
    int vt=-1;
    for (int i=0; i<a.length(); i++)
    {
        if (a[i]!='0')
        {
            vt=i;
            break;
        }
    }
    if (vt==-1) return "0";
    else if (vt!=0)
    {
        string tg="";
        for (int i=vt; i<a.length(); i++) tg+=a[i];
        return tg;
    } else return a;
}
int main ()
{
    //IN;
    int N;
    cin>>N;
    string s;
    xau SX[502];
    int sl=0;
    for (int k=1; k<=N; k++)
    {
        cin>>s;
        //OUT;
        for (int i=0; i<s.length(); i++)
        {
            if ('0'<=s[i] && s[i]<='9')
            {
                string tg="";
                for (int j=i; j<s.length(); j++)
                {
                    i=j;
                    if ('9'<s[j] || s[j]<'0') break;
                    else tg+=s[j];
                }
                sl++;
                SX[sl].x=tg;
            }
        }
    }
    // Sap xep;
    sort (SX+1, SX+sl+1, ssXau);
    for (int i=1; i<=sl; i++)
    {
        cout<<chXau (SX[i].x)<<endl;
    }
    return 0;
}
