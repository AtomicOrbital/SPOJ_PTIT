#include<bits/stdc++.h>
using namespace std;
typedef struct data
{
    int close;
    int open;
    data (int c,int p)
    {
        close = c;
        open = p;
    }
    data ()
    {
        close = 0;
        open = 0;
    }
} data;
data arr[1000006];
int main ()
{
    int n, k;
    cin>>n>>k;
    int A,B;
    for (int i=0;i<k; i++)
    {
        cin>>A>>B;
        arr[A].open++;
        arr[B].close++;
    }
    vector <int> list;
    int so=0;
    for (int i=1; i<=n; i++)
    {
        so += arr[i].open;
        list.push_back(so);
        so-= arr[i].close;
    }
    sort(list.begin(), list.end());
    cout<<list[(n/2)];
    return 0;
}
