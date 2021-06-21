#include <bits/stdc++.h>
using namespace std;
const int maxn=101;
int R,C;
bool a[maxn][maxn];
int xb,yb,xc,yc;
class Node
{
public:
    int x,y,d;
    Node(int x, int y, int d)
    {
        this->x=x;
        this->y=y;
        this->d=d;
    }
};
void Init()
{
    char ch;
    cin>>R>>C;
    for (int i=0;i<R;i++)
    {
        for (int j=0;j<C;j++)
        {
            cin>>ch;
            if(ch=='B')
            {
                xb=i;
                yb=j;
                a[i][j]=true;
            }
            if(ch=='C')
            {
                xc=i;
                yc=j;
                a[i][j]=false;
            }
            if(ch=='.')
                a[i][j]=true;
            if(ch=='*')
                a[i][j]=false;
        }
    }
}
void Solve()
{
    int res=10e8;
    int dx[]={1,-1,0,0};
    int dy[]={0,0,1,-1};
    queue<Node> que;
    que.push(Node(xc,yc,1));
    while(!que.empty())
    {
        Node t=que.front();
        que.pop();
        if(t.x==xb && t.y==yb)
            res=min(res,t.d);
        else
        {
            for (int i=0;i<4;i++)
            {
                int x=t.x+dx[i];
                int y=t.y+dy[i];
                if(a[x][y] && x>=0 && x<R && y>=0 && y<C)
                {
                    que.push(Node(x,y,t.d+1));
                    a[x][y]=false;
                }
            }
        }
    }
    cout<<res-1;
}
int main()
{
    Init();
    Solve();
}
