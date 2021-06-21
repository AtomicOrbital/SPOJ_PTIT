#include<bits/stdc++.h>
using namespace std;
int n,result=99999999;
int s[11],b[11],a[11];
int dochua=1,docay=0;
void in()
{
	cin>>n;
	for(int i=1;i<=n;i++)
    {
		cin>>s[i];
		cin>>b[i];
	}
}
bool check()
{
	for(int x=1;x<=n;x++)
    {
		if(a[x]==1)
			return true;
	}
	return false;
}
void res()
{
	dochua=1;
	docay=0;
	for(int u=1;u<=n;u++)
        {
		if(a[u]==1){
			dochua*=s[u];
			docay+=b[u];
		}
	}
	result=min(result,abs(dochua-docay));
}
void Try(int i)
{
	for(int j=0;j<=1;j++)
        {
		 a[i]=j;
		 if(i==n)
            {
			if(check()==true) res();
		}
		else Try(i+1);
	}
}
int main()
{
    in();
    Try(1);
    cout<<result;
	return 0;
}
