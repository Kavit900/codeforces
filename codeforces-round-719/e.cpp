#include <bits/stdc++.h>

using namespace std;
#define lli long long int

int main()
{
  int T;
  cin>>T;
  while(T--) {
    lli n;
    cin>>n;

    string s;
    cin>>s;

    vector<lli> sheepIndexes;
    for(lli i=0; i<n; i++) {
      if(s[i] == '*') {
        sheepIndexes.push_back(i);
      }
    }

    if(sheepIndexes.size()<=1) {
      cout<<0<<endl;
    } else {
      if(sheepIndexes.size()%2==0) {
        lli middleSheepIndex1 = sheepIndexes.size()/2;
        lli middleSheepIndex2 = sheepIndexes.size()/2-1;


        // left to right
        lli curIndex = sheepIndexes[middleSheepIndex1];

        lli x = sheepIndexes.size()/2;
        long cost1 = 0;
        for(lli i=x; i>=0; i--) {
          cost1 += abs(sheepIndexes[i] - curIndex);
          curIndex--;
        }

        // right to left
        curIndex = sheepIndexes[middleSheepIndex1];
        for(lli i=x; i<sheepIndexes.size(); i++) {
          cost1 += abs(sheepIndexes[i] - curIndex);
          curIndex++;
        }


        // left to right
        curIndex = sheepIndexes[middleSheepIndex2];

        x = sheepIndexes.size()/2+1;
        lli cost2 = 0;
        for(lli i=x; i>=0; i--) {
          cost2 += abs(sheepIndexes[i] - curIndex);
          curIndex--;
        }

        // right to left
        curIndex = sheepIndexes[middleSheepIndex2];
        for(lli i=x; i<sheepIndexes.size(); i++) {
          cost2 += abs(sheepIndexes[i] - curIndex);
          curIndex++;
        }

        if(cost1 < cost2) {
          cout<<cost1<<endl;
        } else {
          cout<<cost2<<endl;
        }

      } else {
        lli middleSheepIndex = sheepIndexes.size()/2;

        // left to right
        lli curIndex = sheepIndexes[middleSheepIndex];

        lli x = sheepIndexes.size()/2;
        //cout<<"x is:- "<<x<<endl;
        lli cost = 0;
        for(lli i=x; i>=0; i--) {
          cost += abs(sheepIndexes[i] - curIndex);
          //cout<<sheepIndexes[i]<<" "<<curIndex<<endl;
          curIndex--;
        }

        // right to left
        curIndex = sheepIndexes[middleSheepIndex];
        for(lli i=x; i<sheepIndexes.size(); i++) {
          cost += abs(sheepIndexes[i] - curIndex);
          //cout<<sheepIndexes[i]<<" "<<curIndex<<endl;
          curIndex++;
        }

        cout<<cost<<endl;
      }
    }
  }
  return 0;
}

/*
1
7
*.....*
*/
