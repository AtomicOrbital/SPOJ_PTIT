#include<bits/stdc++.h>
#include<vector>
using namespace std;
struct data
{
	long front;
	long back;
	int i;
	data(long x,long y,int z)
	{
		front=x;
		back=y;
		i=z;
	}
} typedef data;
vector<data>v;
void init()
{
	long begin=1;
	long end=5;
	int i=0;
	int Index=pow(2,i);
	v.push_back(data(begin,end,Index));
	while(1)
	{
		if(end>1000000000) break;
		begin=end+1;
		i++;
		Index=pow(2,i);
		end=begin+Index*5-1;
		v.push_back(data(begin,end,Index));
	}
}
int main()
{
	init();
	long N;
	cin>>N;
	int vt;
	for (inti=0;i<v.size();i++)
	{
		if (N>=v[i].front&&N<=v[i].back)
		{
			vt=i;
			break;
		}
	}
	long stt=N-v[vt].front+1;
	int Index=v[vt].i;
	if (stt>=0*Index+1 && stt<=1*Index)
		cout<<"1";
	else if (stt>=1*Index+1 && stt<=2*Index)
		cout<<"2";
	else if (stt>=2*Index+1 && stt<=3*Index)
		cout<<"3";
	else if (stt>=3*Index+1 && stt<=4*Index)
		cout<<"4";
	else if (stt>=4*Index+1 && stt<=5*Index)
		cout<<"5";
	return 0;
}
