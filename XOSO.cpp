#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll res = 0;
map<ll,ll > mapz;
ll n,x;
ll sumz = 0;
void init()
{
    cin >> n >> x;
    for(int i=0;i<n;i++){
      ll tmp;
      cin >> tmp;
      mapz[tmp]++;
    }

}
void process()
{
  sumz = x*n;
  ll valz = 0;
  ll indez = 9999999999;
  map<ll, ll>::iterator it;
  for(it = mapz.begin(); it != mapz.end();it++){
      ll u , v;
      u = it -> first;
      v = it -> second;
      if (v <= indez){
        valz = u;
        indez = v;
      }
 }
  res = sumz - (valz * indez);
  cout << res;
}
int main()
{
  init();
  process();

  return 0;
}
