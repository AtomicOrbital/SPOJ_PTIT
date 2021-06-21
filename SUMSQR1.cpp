#include<bits/stdc++.h>
#include<string>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
void Them_Ki_Tu(string s,int vt,char kitu)
{
	int n=s.length();
	for (int i=n-1;i>=vt;i--)
	{
		s[i+1]=s[i];
	}
	s[vt]=kitu;
	s[n+1]='\0';
}
string xuly(string s1,string s2)
{
	if (s1.length()>s2.length())
	{
		int sl_them=s1.length()-s2.length();
		for (int i=1;i<=sl_them;i++)
		{
			Them_Ki_Tu(s2,0,'0');
		}
	}
	else if(s1.length()<s2.length())
	{
		int sl_them=s2.length()-s1.length();
		for (int i=1;i<=sl_them;i++)
		{
			Them_Ki_Tu(s1,0,'0');
		}
	}
	int nho=0;
	int kq=0;
	string ket_qua="";
	int k=0;
	for (int i=s2.length()-1;i>=0;i--)
	{
		kq=(s1[i]-48)+(s2[i]-48)+nho;
		nho=kq/10;
		ket_qua[k]=(kq%10)+48;
		k++;
	}
	if(nho!=0)
	{
		ket_qua[k]=nho+48;
	}
	return ket_qua;
}
string numtostr(ll a)
{
    string s="";
    while(a!=0)
    {
        char c=a%10+'0';
        a/=10;
        s=c+s;
    }
    return s;
}
int main()
{
  ll n;
  cin>>n;
  string s="";
  vector<ll>a;
  for(int i=0;i<n;i++)
  {
      a.push_back((i+1)*(i+1));
  }
  if(a.size()%2==0)
  {
    for(int i=0;i<n;i+=2)
    {
        string s1=numtostr(a[i]);
        string s2=numtostr(a[i+1]);
        if (s1.length()>s2.length())
       {
		 int sl_them=s1.length()-s2.length();
		 for (int i=1;i<=sl_them;i++)
		 {
			Them_Ki_Tu(s2,0,'0');
		 }
	   }
       else if(s1.length()<s2.length())
	   {
		 int sl_them=s2.length()-s1.length();
		 for (int i=1;i<=sl_them;i++)
		 {
			Them_Ki_Tu(s1,0,'0');
		 }
	   }
	   int nho=0;
	   int kq=0;
	   string ket_qua="";
	   int k=0;
	   for (int i=s2.length()-1;i>=0;i--)
	   {
		kq=(s1[i]-48)+(s2[i]-48)+nho;
		nho=kq/10;
		ket_qua[k]=(kq%10)+48;
		k++;
	   }
	   if(nho!=0)
	  {
		ket_qua[k]=nho+48;
	  }
  }

  return 0;
}
