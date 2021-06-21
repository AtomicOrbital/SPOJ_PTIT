#include<stdio.h>
typedef long long ll;
ll s[105][105],n[105];
void xuly()
{
    for(int a=0;a<=100;a++)
    {
        for(int b=a;b<=100;b++)
        {
            for(int i=0;i<=100;i++) n[i]=0;
            ll res=1;
            for(int i=a+1;i<=b;i++)
            {
                ll ans=i;
                for(int j=2;j*j<=ans;j++)
                {
                    while(ans%j==0)
                    {
                        n[j]++;
                        ans/=j;
                    }
                }
                if(ans>1) n[ans]++;
            }
            for(int j=1;j<=b;j++) res*=(n[j]+1);
            s[a][b]=res;
        }
    }
}
int main()
{
    xuly();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll x,y;
        scanf("%lld%lld",&x,&y);
        printf("%lld\n",s[x][y]);
    }
}
