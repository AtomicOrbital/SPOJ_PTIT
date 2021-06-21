#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
int n,m,h;
vector<int>generator;
vector<int>line[1003];
void Read()
{
    cin>>n>>m>>h;
    for (int i=0; i<m; i++)
    {
        int tmp;
        cin>>tmp;
        generator.push_back(tmp);
    }
    for (int i=0; i<h; i++)
    {
        int a, b;
        cin>>a>>b;
        line[a].push_back(b);
        line[b].push_back(a);
    }
}
int weak[1003];
void Init()
{
    for (int i=0; i<n; i++)
    {
        weak[i] = 1003;
    }
}
int check[1003];
int trans[1003];
void Reset()
{
    for (int i=0; i<n; i++)
    {
        check[i] = 0;
        trans[i] = -1;
    }
}
void BFS(int u)
{
    check[u] = 1;
    queue<int> q;
    q.push(u);
    trans[u] = 0;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i=0; i<line[u].size(); i++)
        {
            int v = line[u][i];
            if (check[v] == 0)
            {
                q.push(v);
                check[v] = 1;
                trans[v] = trans[u] + 1;
            }
        }
    }
}
void CheckWeak()
{
    for (int i=0; i<n; i++)
    {
        if (trans[i]!=-1)
        {
            if (trans[i]<weak[i])
            {
                weak[i] = trans[i];
            }
        }
    }
}
void OUT()
{
    int p = 0;
    for (int i=1; i<n; i++)
    {
        if (weak[i] > weak[p])
        {
            p = i;
        }
    }
    cout<<p;
}
void Test()
{
    for (int i=0; i<n; i++)
    {
        cout<<check[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<trans[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<weak[i]<<" ";
    }
}
int main()
{
    Read();
    Init();
    for (int i=0; i<m; i++)
    {
        Reset();
        BFS(generator[i]);
        CheckWeak();
    }
    OUT();
    return 0;
}
