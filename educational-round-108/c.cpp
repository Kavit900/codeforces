/*
Problem link - https://codeforces.com/contest/1519/problem/C
*/

#include <bits/stdc++.h>

using namespace std;
#define lli long long int

bool cmp(lli &a, lli &b) {
  return a>b;
}

int main()
{
  lli T;
  cin>>T;
  while(T--) {
    lli n;
    cin>>n;
    vector<lli> univ[n+1];

    vector<lli> student;
    vector<lli> skill;

    for(lli i=0; i<n; i++) {
      lli t;
      cin>>t;
      student.push_back(t);
    }

    for(lli i=0; i<n; i++) {
      lli t;
      cin>>t;
      skill.push_back(t);
    }

    for(lli i=0; i<n; i++) {
      int u = student[i];
      //cout<<u<<" "<<skill[i]<<endl;
      univ[u].push_back(skill[i]);
    }

    for(lli i=1; i<=n; i++) {
      sort(univ[i].begin(), univ[i].end(),cmp);
    }

    for(lli i=1; i<=n; i++) {
      for(lli j=1; j<univ[i].size(); j++) {
        univ[i][j] = univ[i][j] + univ[i][j-1];
      }
    }
 
    lli ans[n+1];
    for(lli i=0; i<=n; i++) {
      ans[i] = 0;
    }
    for(lli i=1; i<=n; i++) {
      for(lli k=1; k<=univ[i].size(); k++) {
        lli len = univ[i].size();

        lli c = (len/k)*k;
        ans[k] += univ[i][c-1];
      }
    }

    for(lli i=1; i<=n; i++) {
      cout<<ans[i]<<" ";
    }
    cout<<endl;

  }
  return 0;
}
