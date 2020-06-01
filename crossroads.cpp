//crossroads

#include <bits/stdc++.h>

using namespace std;


int main() {
  freopen("crossroad.in", "r", stdin);
  freopen("crossroad.out", "w", stdout);
  int N, cow, side;
  int index[9]; //array to store cows values
  cin >> N; //define amount of sightings

  for (int i=0; i<N; i++) { //go through the list
    cin >> cow >> side;
    switch(cow){ //use cases to check which cow has been sighted
      case 1:
        index[0]=side;
        break;
      case 2:
        index[1]=side;
        break;
      case 3:
        index[2]=side;
          break;
      case 4:
        index[3]=side;
          break;
      case 5:
        index[4]=side;
        break;
      case 6:
        index[2]=side;
        break;
      case 7:
        index[2]=side;
        break;
      case 8:
        index[2]=side;
        break;
      case 9:
        index[2]=side;
        break;
      case 10:
        index[2]=side;
        break;
      }
    }

  /*
  similar to dont be Last
  array of cows, 1 to 10, first value assigned during first sighting
  use cases to check which cow has been sighted and assign 1 or 0 respectively
  on second loop (seperate from first loop)
  use cases to check which cow has been sighted
    if a cow is sighted again (if a == 3), check if the abs(stored value - new value) = 1
      if true, increment a totalcrossings variable and set that cow to the new value
  cout << totalcrossings <<endl;
  int n
  cin >> n;
  for i < n
  cin x y
  for i < n
  */
}
