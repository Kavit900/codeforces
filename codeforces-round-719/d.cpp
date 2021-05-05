#include <bits/stdc++.h>

using namespace std;
#define lli long long int

int main()
{
  lli T;
  cin>>T;
  while(T--) {
    lli n;
    cin>>n;

    lli cnt = 0;

    unordered_map<int, int> um;
    for(int i=0; i<n; i++) {
      lli t;
      cin>>t;
      lli d = t - (i+1);
      um[d]++;
    }

    lli ans = 0;
    unordered_map<int, int>::iterator it;
    for(it = um.begin(); it!=um.end(); it++) {
      lli d = it->second;
      ans += (d * (d-1))/2;
    }

    cout<<ans<<endl;
  }
  return 0;
}
