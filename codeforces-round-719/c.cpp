#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin>>T;
  while(T--) {
    int n;
    cin>>n;

    vector<vector<int>> mat(n, vector<int>(n, 0));

    int start = 1;
    int end = n*n;

    if(n == 1) {
      cout<<1<<endl;
    } else if(n == 2) {
      cout<<-1<<endl;
    } else {
      if(n%2 == 0) {
        int lowerFlag = 1;
        for(int i=0; i<n; i++) {
          for(int j=0; j<n; j++) {
            if(lowerFlag) {
              mat[i][j] = start;
              start++;
            } else {
              mat[i][j] = end;
              end--;
            }
            lowerFlag = !lowerFlag;
          }
        }
        int temp = mat[n-1][n-1];

        mat[n-1][n-1] = mat[0][0];
        mat[0][0] = temp;
      } else {
        int lowerFlag = 1;
        for(int i=0; i<n; i++) {
          for(int j=0; j<n; j++) {
            if(lowerFlag) {
              mat[i][j] = start;
              start++;
            } else {
              mat[i][j] = end;
              end--;
            }
            lowerFlag = !lowerFlag;
          }
        }

        int temp = mat[n-1][n-1];

        mat[n-1][n-1] = mat[0][0];
        mat[0][0] = temp;
      }


      // print
      for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
      }

      cout<<endl;
    }
  }
  return 0;
}
