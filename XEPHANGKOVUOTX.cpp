#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int dolec(int a,int b)
{
	if (a-b>0) return(a-b);
	else return b-a;
}
int main ()
{
	int dl;
	cin>>dl;
	string xau;
	cin>>xau;
	vector<char>hangdoi;
	for (int i=0;i<xau.length();i++)
	{
		hangdoi.push_back(xau[i]);
	}
	int nam=0;
	int nu=0;
	while(1)
	{
		if (hangdoi.empty()) break;
		if (hangdoi[0]=='M')
		{
			int namp=nam+1;
			int nup=nu+0;
			if (dolec(namp,nup)<=dl)
			{
				nam=namp;
				nu=nup;
				hangdoi.erase(hangdoi.begin());
			}
			else
			{
				if (hangdoi[1]=='M')
				{
					break;
				}
				else
				{
					namp=nam+0;
					nup=nu+1;
					if(dolec(namp,nup)<=dl)
					{
						nam=namp;
						nu=nup;
						hangdoi.erase(hangdoi.begin()+1);
					}
					else break;
				}
			}
		}
		if (hangdoi[0]=='W')
		{
			int namp=nam+0;
			int nup=nu+1;
			if (dolec(namp,nup)<=dl)
			{
				nam=namp;
				nu=nup;
				hangdoi.erase(hangdoi.begin());
			}
			else
			{
				if (hangdoi[1]=='W')
				{
					break;
				}
				else
				{
					namp=nam+1;
					nup=nu+0;
					if (dolec(namp,nup)<=dl)
					{
						nam=namp;
						nu=nup;
						hangdoi.erase(hangdoi.begin()+1);
					}
					else break;
				}
			}
		}
	}
	cout<<nam+nu;
	return 0;
}
