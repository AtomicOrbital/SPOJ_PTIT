#include<stdio.h>
bool xl(char *x)
{
    char Stack[105];
    int T=-1;
    for(;*x;x++)
    {
        if(*x=='[' || *x=='(' ) {T++; Stack[T]=*x;}
        else if(*x==')')
        {
            if(T<0) return false;
            if(Stack[T]!='(') return false;
            T--;
        }
        else if(*x==']')
        {
            if(T<0) return false;
            if(Stack[T]!='[') return false;
            T--;
        }
    }
    if(T==-1) return true;
    return false;
}
int main()
{
    char x[105];
    int T=0;
    bool A[32005];
    do
    {
        gets(x);
        if(*x=='.' && x[1]==0) break;
        T++;
        A[T]=xl(x);
    }while(1);
    for(int i=1;i<=T;i++)
    if(A[i]) printf("yes\n");else printf("no\n");
}
