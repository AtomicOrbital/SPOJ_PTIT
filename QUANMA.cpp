#include <iostream>
#include <math.h>
#include <stdio.h>
#include <map>
#include <queue>
using namespace std;
const long long x_max = 100000;
const long long y_max = 100000;
#define ll long long
int inSide (ll x, ll y)
{
    if (x>=-x_max && x<=x_max && y>=-y_max && y<=y_max)
        return 1;
    return 0;
}
ll vertex (ll x, ll y)
{
    return (2*y_max*y_max + 3*y_max - x_max + 1) + (2*y_max + 1)*y + x;
}
ll x_t, y_t;
ll n;
ll x_i, y_i;
map <ll, char> prevent;
void read ()
{
    scanf ("%lld%lld", &x_t, &y_t);
    scanf ("%lld", &n);
    for (ll i=0; i<n; i++)
    {
        scanf ("%lld%lld", &x_i, &y_i);
        prevent[vertex(x_i, y_i)] = 'X';
    }
}
map <ll, char> check;
map <ll, ll> len;
void init ()
{
    prevent.clear();
    check.clear();
    len.clear();
}
struct data
{
    ll x, y;
    data (ll x_, ll y_)
    {
        x = x_;
        y = y_;
    }
};
ll x_xq[] = {-1, -2, -2, -1, +1, +2, +2, +1};
ll y_xq[] = {-2, -1, +1, +2, +2, +1, -1, -2};
void BFS (ll x, ll y)
{
    queue <data> q;
    q.push(data(x, y));
    check[vertex(x, y)] = 'Y';
    len[vertex(x, y)] = 0;

    while (!q.empty())
    {
        data v = q.front();
        q.pop();
        for (int i=0; i<8; i++)
        {
            ll x_p = v.x+x_xq[i];
            ll y_p = v.y+y_xq[i];
            if (inSide(x_p, y_p)==1 && check[vertex(x_p, y_p)]!='Y' && prevent[vertex(x_p, y_p)]!='X')
            {
                q.push(data(x_p, y_p));
                len[vertex(x_p, y_p)] = len[vertex(v.x, v.y)]+1;
                check[vertex(x_p, y_p)] = 'Y';
                if (x_p == x_t && y_p == y_t) return;
            }
        }
    }
}
int main ()
{
    int t;
    scanf ("%d", &t);
    while (1)
    {
        if (t==0) break;
        t--;
        init();
        read();
        BFS(0, 0);
        printf("%lld\n", len[vertex(x_t, y_t)]);
    }
    return 0;
}
