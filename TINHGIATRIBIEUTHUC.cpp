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
ll ditruoc(char c)
{
    if(c=='(') return 0;
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    return 3;
}
string hauto(string res,string s)
{
    stack<char>st;
    string s1;
    int i=0;
    while(i<s.length())
    {
        char c=s[i];
        if(c-'0'>=0&&c-'0'<=9||isalpha(c)) res+=c;
        else
        {
            res+=" ";
            if(c=='(') st.push(c);
            else
            {
                if(st.empty()==1) st.push(c);
                else
                {
                    if(c==')')
                    {
                        while(st.top()!='(')
                        {
                            res+=st.top();
                            st.pop();
                        }
                        st.pop();
                    }
                    else
                    {
                        while(!st.empty()&&ditruoc(c)<=ditruoc(st.top()))
                        {
                            res+=st.top();
                            st.pop();
                        }
                        st.push(c);
                    }
                }
            }
        }
        i++;
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}
ll ktra(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/') return 1;
    return 0;
}
void xuly(string s)
{
  vector<ll>st;
  for(int i=0;i<s.size();)
  {
    ll sum=0;
    bool kt=true;
    while(s[i]-'0'>=0&&s[i]-'0'<=9)
    {
        kt=false;
        sum=sum*10+(s[i]-'0');
        i++;
    }
    if(kt==false) st.push_back(sum);
    if(s[i]==' ') i++;
    if(ktra(s[i])==1)
    {
        ll x=st.back();
        st.pop_back();
        ll y=st.back();
        st.pop_back();
        if(s[i]=='+') st.push_back(x+y);
        if(s[i]=='-') st.push_back(y-x);
        if(s[i]=='*') st.push_back(y*x);
        if(s[i]=='/') st.push_back(y/x);
        i++;
    }
  }
  cout<<st.back()<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
      string s,res="";
      cin>>s;
      string x=hauto(res,s);
      xuly(x);
  }
  return 0;
}
