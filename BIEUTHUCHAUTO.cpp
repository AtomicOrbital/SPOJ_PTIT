#include<bits/stdc++.h>
#include<string>
#include<vector>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define sp(x) cout<<x<<" ";
#define en(x) cout<<x<<endl;
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
string s;
int getVal(char x)
{
	if (x=='^') return 3;
	if (x=='*'||x=='/') return 2;
	if (x=='+'||x =='-') return 1;
	if (x=='(') return 0;
	return 0;
}
void init()
{
	cin>>s;
}
void process()
{
	string res="";
	stack<char>a;
	for(int i=0;i<s.length();i++)
    {
		if (s[i]>='a'&&s[i]<='z')
		{
			res+=s[i];
		}
		else if (s[i]=='(') a.push(s[i]);
		else if (s[i] == ')')
		{
			while(a.top()!= '(')
            {
				res+=a.top();
				a.pop();
			}
			a.pop();
		}
		else{
			if(a.empty()||getVal(a.top())<getVal(s[i])) a.push(s[i]);
			else
			{
				while (a.size()&&getVal(a.top())>=getVal(s[i]))
				{
					res+=a.top();
					a.pop();
				}
				a.push(s[i]);
			}
		}
	}
	while(a.size())
    {
		res+=a.top();
		a.pop();
	}
	cout<<res<<endl;
}
int main()
{
	int T;
	cin >> T;
	while(T--)
    {
		init();
		process();
	}
	return 0;
}
