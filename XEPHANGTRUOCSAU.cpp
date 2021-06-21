#include <iostream>
#include <vector>
using namespace std;

int SV_sau[1000006];
int SV_truoc[1000006];
void init ()
{
    for (int i=0; i<=1000000; i++)
    {
        SV_sau[i]=-1;
        SV_truoc[i]=-1;
    }
}

vector <int> so;
int dd[1000006] = {0};
void check (int x)
{
    if (dd[x]==0 && x!=0)
    {
        so.push_back(x);
        dd[x]=1;
    }
}

int main ()
{
    init ();
    int n;
    cin>>n;
    int vt1, vt2;
    for (int i=1; i<=n; i++)
    {
        int a, b;
        cin>>a>>b;
        check (a); check (b);
        SV_sau[a] = b;
        SV_truoc[b] = a;
    }
    vector <int> D1;
    vector <int> D2;
    if (n%2==0)
    {
    //Day 1
        int st = 0;
        while (1)
        {
            if (SV_sau[st]==-1) break;
            D1.push_back(SV_sau[st]);
            st = SV_sau[st];
        }
        // Day 2
        st = 0;
        while (1)
        {
            if (SV_truoc[st]==-1) break;
            D2.push_back(SV_truoc[st]);
            st = SV_truoc[st];
        }
        //IN
        int D_1 = 0, D_2 = D2.size()-1;
        for (int i=1; i<=n; i++)
        {
            if (i%2!=0)
            {
                cout<<D2[D_2]<<" ";
                D_2--;
            }
            else
            {
                cout<<D1[D_1]<<" ";
                D_1++;
            }
        }
    }
    else
    {
        //Day 1
        int st = 0;
        while (1)
        {
            if (SV_sau[st]==0) break;
            D1.push_back(SV_sau[st]);
            st = SV_sau[st];
        }
        st=0;
        for (int i=0; i<so.size(); i++)
        {
            if (SV_sau[so[i]]==-1)
            {
                st=so[i];
                break;
            }
        }
        if (st!=0) D2.push_back(st);
        while (1)
        {
            if (SV_truoc[st]==-1) break;
            D2.push_back(SV_truoc[st]);
            st = SV_truoc[st];
        }
        int D_1 = 0, D_2 = D2.size()-1;
        for (int i=1; i<=n; i++)
        {
            if (i%2!=0)
            {
                cout<<D2[D_2]<<" ";
                D_2--;
            }
            else
            {
                cout<<D1[D_1]<<" ";
                D_1++;
            }
        }
    }
    return 0;
}
