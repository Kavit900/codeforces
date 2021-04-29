/*
Problem link - https://codeforces.com/contest/1519/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin>>T;
  while(T--) {
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;

    queue<pair<int, pair<int, int>>> q;
    q.push(make_pair(0,make_pair(1,1)));
    set<pair<int, pair<int, int>>> visited;
    int flag = 0;
    if(k > n*m) {
      cout<<"NO"<<endl;
    } else {
    while(!q.empty()) {
      pair<int, pair<int, int>> front = q.front();
      pair<int, int> point = front.second;
      int cost = front.first;
      if(point.first == n && point.second == m) {
        if(cost == k) {
          flag = 1;
          break;
        }
      }
      q.pop();
      if(point.first > n || point.second > m || visited.find(front) != visited.end() || cost > k) {
        // no-op
      } else {
        visited.insert(front);
        // move right
        int new_cost = cost + point.first;
        q.push(make_pair(new_cost, make_pair(point.first, point.second+1)));

        // move down
        new_cost = cost + point.second;
        q.push(make_pair(new_cost, make_pair(point.first+1,point.second)));
      }
    }
    if(flag) {
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
    }
  }
  return 0;
}
