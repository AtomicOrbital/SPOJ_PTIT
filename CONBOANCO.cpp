#include <iostream>
using namespace std;
long long kq(long long n,long long k)
{
    if(n<=k) return 1;
    if((n+k)%2) return 1;
    return kq((n+k)/2,k)+kq((n-k)/2,k);
}
int main()
{
    long long n,k;
    cin>>n>>k;
    cout<<kq(n,k);
}
