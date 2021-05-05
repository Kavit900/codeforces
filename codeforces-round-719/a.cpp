#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin>>T;

  while(T--) {
    int n;
    cin>>n;

    string s;
    cin>>s;

    string fs = "";

    int i = 0;
    while(i < s.size()) {
      int j = i+1;
      fs += s[i];
      while(s[i] == s[j]) {
        j++;
      }
      i = j;
    }

    set<int> visited;

    int flag = 1;

    //cout<<fs<<endl;
    for(int i=0; i<fs.size(); i++) {
      if(visited.find(fs[i]) != visited.end()) {
        flag = 0;
        break;
      } else {
        visited.insert(fs[i]);
      }
    }

    if(flag) {
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
