#include <bits/stdc++.h>

using namespace std;
#define lli long long int

int main()
{


  int T;
  cin>>T;
  while(T--) {
    lli arr[9] = {1,2,3,4,5,6,7,8,9};
    int original[9] = {1,2,3,4,5,6,7,8,9};
    lli n;
    cin>>n;

    lli ans = 0;

    lli start = 0;
    lli cycle = 0;
    lli tens = 1;
    while(1) {
      int flag = 0;
      for(int i=0; i<9; i++) {
        if(arr[i] <= n) {
          //cout<<arr[i]<<" "<<endl;
          ans++;
        } else {
          flag = 1;
          break;
        }
      }

      if(flag) {
        break;
      }

      //cout<<"After multiply"<<endl;
      // change the array to add one more digit of same type
      for(int i=0; i<9; i++) {
        arr[i] = 10*arr[i] + original[i];
        //cout<<arr[i]<<" "<<endl;
      }
    }

    cout<<ans<<endl;
  }
  return 0;
}
