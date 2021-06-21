#include<bits/stdc++.h>
#include<string>
#include<vector>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
struct canh
{
	ll dau,cuoi;
	ll trongso;
};
ll ntest,m,i,u,c,v;
ll d[101],dem=0,dad[101];
canh CA[10001];
ll chiphi=0;
ll FindDad(ll u)
{
	if(dad[u]==-1)
		{
			dad[u]=u;return u;
		}
	else return dad[u];
}
void Add(int u,int v)
{
	if(u>v)
		for(int i=1;i<=m;i++)
			{
				if(dad[i]==u)
					dad[i]=v;
			}
	else if(v>u)
		for(int i=1;i<=m;i++)
				{
					if(dad[i]==v)
						dad[i]=u;
				}
}
void quick(canh CA[],ll left,ll right)
{
	if(left==right)
		return;
	 if(left<right)
		{
			ll k=(left+right)/2;
			ll i=left,j=right;
		    while(i<=j)
			{
				while(CA[i].trongso<CA[k].trongso) i++;
				while(CA[j].trongso>CA[k].trongso) j--;
				if(i<=j)
					{
						canh g=CA[i];
						CA[i]=CA[j];
						CA[j]=g;
						i++,j--;
					}
			}
		quick(CA,left,j);
		quick(CA,i,right);
		}
}
void quickSort(canh CA[], int l, int r)
{
	if(l<r)
    {
        int key = CA[(l+r)/2].trongso;
        int i = l, j = r;
        while(i <= j)
        {
            while(CA[i].trongso < key) i++;
            while(CA[j].trongso > key) j--;
            if(i <= j)
            {
                if (i < j)
                    {
                        canh g=CA[i];
                        CA[i]=CA[j];
                        CA[j]=g;
                    }
                i++;
                j--;
            }
    }
    quickSort(CA, l, j);
    quickSort(CA, i, r);
	}
}
void Selec(canh CA[],ll n)
{
	for(int i=1;i<=n-1;i++)
		for(int j=i+1;j<=n;j++)
			if(CA[i].trongso>CA[j].trongso)
				{
					canh g=CA[i];
					CA[i]=CA[j];
					CA[j]=g;
				}
}
void process()
{
	quickSort(CA,1,dem);
	ll demcanh=0,demdinh=0;
	ll i1=dem,x,y;
	while(demcanh<m-1&&demdinh<m)
	{
		x=FindDad(CA[i1].dau);
		if(x==-1) demdinh++;
		y=FindDad(CA[i1].cuoi);
		if(y==-1) demdinh++;
		if(x!=y)
			{
				Add(x,y);demcanh++;
				chiphi-=CA[i1].trongso;
			}
		i1--;
	}
}
int main()
{
	cin>>ntest;
	for(int j=1;j<=ntest;j++)
		{
			cin >>m;chiphi=0,dem=0;
			for(int j2=1;j2<=m;j2++)
				{
					cin >>i>>u>>c;
					d[i]=u,dad[i]=-1;
					for(int j1=1;j1<=c;j1++)
						{
							cin >>v;
							if(i>v)
								{
									CA[++dem].dau=i; CA[dem].cuoi=v;
									CA[dem].trongso=d[i]+d[v];
									chiphi+=CA[dem].trongso;
								}
						}
				}
				process();
				cout <<chiphi<<endl;
		}
}
