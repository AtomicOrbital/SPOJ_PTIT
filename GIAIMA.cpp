#include<bits/stdc++.h>
#include<string>
using namespace std;
void chuanhoa(string s)
{
	while(s[0]==' ') strcpy(&s[0],&s[1]);
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			strcpy(&s[i],&s[i+1]);
			i--;
		}
	}
	while(s[s.length()-1]==' ') strcpy(&s[s.length()-1],&s[s.length()]);
}
int main()
{
	string s,s1;
	getline(cin,s);
	getline(cin,s1);
	int len=s.length(),len2=s1.length();
	for(int i=0;i<len;i++)
	{
		if((s[i]==s1[0])&&(s[i+len2-1]==s1[len2-1]))
		{
			int j;
			for(j=i;j<len;j++)
			{
				s[j]=s[j+len2];
			}
			s[j+len2]='\0';
		}
	}
	cout<<s;
}
