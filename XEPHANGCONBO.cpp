#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int const Max = 50007;
using namespace std;
ll a[Max];
struct m {
    ll valMin, valMax;
};
m t[4*Max];
void init() {
    for(ll i = 0; i < 4*  Max ; i++) {
        t[i].valMax = INT_MIN;
        t[i].valMin = INT_MAX;
    }
}
ll getMid(ll l, ll r) {
    return (l + r) / 2;
}
void build(ll node, ll st, ll en) {
    if(st == en) {
        t[node].valMax = max(a[st], t[node].valMax);
        t[node].valMin = min(a[st], t[node].valMin);
        return;
    }

    ll mid = getMid(st,en);
    build(node*2, st, mid);
    build(node*2 + 1, mid + 1, en);
    t[node].valMax = max(t[node * 2].valMax, t[node*2+1].valMax);
    t[node].valMin = min(t[node * 2].valMin, t[node*2+1].valMin);
}
ll getMax(ll node, ll st, ll en, ll l, ll r) {
    if(l > en || r < st)
        return INT_MIN;
    if(l <= st && r >= en)
        return t[node].valMax;

    ll mid = getMid(st,en);

    return max(getMax(node*2, st, mid, l, r), getMax(node*2+1, mid + 1, en, l, r));
}
ll getMin(ll node, ll st, ll en, ll l, ll r) {
    if(l > en || r < st)
        return INT_MAX;
    if(l <= st && r >= en)
        return t[node].valMin;

    ll mid = getMid(st,en);

    return min(getMin(node*2, st, mid, l, r), getMin(node*2+1, mid + 1, en, l, r));
}

ll queryResult(ll node, ll st, ll en, ll l, ll r) {
    return (getMax(node,st,en,l,r) - getMin(node,st,en,l,r));
}
ll n, m;
int main() {
    fast
    init();
    cin >> n >> m;
    for(ll i = 1 ; i <= n ; i++)
        cin >> a[i];

    build(1,1,n);
    while(m--) {
        ll u, v;
        cin >> u >> v;

        cout << queryResult(1,1,n,u,v) << endl;
    }
    return 0;
}
