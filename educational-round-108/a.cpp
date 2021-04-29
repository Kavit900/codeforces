/*
Problem Link - https://codeforces.com/contest/1519/problem/A
*/

#include <bits/stdc++.h>

using namespace std;
#define lli long long int

int main()
{
  int T;
  cin>>T;
  while(T--) {
    lli a,b,d;
    cin>>a>>b>>d;
    lli mx = max(a,b);
    lli minx = min(a,b);

    lli dcnt = mx/minx - 1;

    lli rem = mx - (mx/minx)*minx;

    if(rem > 0) {
      dcnt++;
    }
    if(dcnt > d) {
      cout<<"NO"<<endl;
    } else {
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
