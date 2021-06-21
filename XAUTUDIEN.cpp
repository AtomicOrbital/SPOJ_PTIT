#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
string str;
void read()
{
    getline (cin, str);
}
vector <int> isNumber;
vector <string> words;
vector <int> numbers;
void init()
{
    isNumber.clear();
    words.clear();
    numbers.clear();
}
int StringToNum (string x)
{
    int f = 0;
    if (x[0]=='-')
       f = 1;
    int S = 0;
    for (int i=f; i<x.length(); i++)
    {
        S=(S*10)+(x[i]-'0');
    }
    if (f==1) return 0-S;
    return S;
}
void separation()
{
    stack<string> st;
    for (int i=str.length()-1; i>=0; i--)
    {
        if (str[i]==',' || str[i]=='.')
        {
            st.push("");
        }
        else if (str[i]!=' ')
        {
            string top = st.top();
            st.pop();
            top=str[i]+top;
            st.push(top);
        }
    }
    while (!st.empty())
    {
        string top = st.top();
        st.pop();
        if (top[0]=='-' || (top[0]>='0' && top[0]<='9'))
        {
            numbers.push_back(StringToNum(top));
            isNumber.push_back(1);
        }
        else
        {
            words.push_back(top);
            isNumber.push_back(0);
        }
    }
}
void Sort()
{
    sort(numbers.begin(), numbers.end());
    sort(words.begin(), words.end());
}
void Print()
{
    int vN = 0;
    int vW = 0;
    for (int i=0; i<isNumber.size()-1; i++)
    {
        if (isNumber[i]==1)
        {
            cout<<numbers[vN]<<", ";
            vN++;
        }
        else
        {
            cout<<words[vW]<<", ";
            vW++;
        }
    }
    if (isNumber[isNumber.size()-1]==1)
    {
        cout<<numbers[vN]<<".";
        vN++;
    }
    else
    {
        cout<<words[vW]<<".";
        vW++;
    }
    cout<<endl;
}
int main ()
{
    while (1)
    {
        read();
        if (str==".") break;
        init();
        separation();
        Sort();
        Print();
    }
    return 0;
}
