//crossroads

#include <bits/stdc++.h>

using namespace std;


int main() {
  freopen("crossroad.in", "r", stdin);
  freopen("crossroad.out", "w", stdout);
  int N, side;
  int index[9]; //array to store cows values
  index[0] ;
  index[1] ;
  index[2] ;
  index[3] ;
  index[4] ;
  index[5] ;
  index[6] ;
  index[7] ;
  index[8] ;
  index[9] ;
  bool a = false;
  bool b = false;
  bool c = false;
  bool d = false;
  bool e = false;
  bool f = false;
  bool g = false;
  bool h = false;
  bool i = false;
  bool j = false;

  cin >> N; //define amount of sightings

  for (int i=0; i<N; i++) { //go through the list
    cin >> index >> side;
    switch(index){ //use cases to check which cow has been sighted and assign the first value
      case 1:
        if (a) {
          if (abs(index[i]-side)==1) {
            total++;
            break;
          }
        }//break; //if weve already seen this cow, break
        index[0]=side; //assign the first side of the cow
        bool a = true; //lets us know weve seen this cow
        break;
      case 2:
        if (b) break;
        index[1]=side;
        bool a = true;
        break;
      case 3:
        if (c) break;
        index[2]=side;
        bool a = true;
        break;
      case 4:
        if (d) break;
        index[3]=side;
        bool d = true;
        break;
      case 5:
        if (e) break;
        index[4]=side;
        bool e = true;
        break;
      case 6:
        if (f) break;
        index[5]=side;
        bool f = true;
        break;
      case 7:
        if (g) break;
        index[6]=side;
        bool g = true;
        break;
      case 8:
        if (h) break;
        index[7]=side;
        bool h = true;
        break;
      case 9:
        if (i) break;
        index[8]=side;
        bool i = true;
        break;
      case 10:
        if (j) break;
        index[9]=side;
        bool j = true;
        break;
      default:
        cout << "no valid cases"<< endl;
      }
    }

    int total = 0;
    for (int i=0; i<N; i++) {
      if ()
    }

  /*
  TRY THIS: setting all the values to nothing in the array, then let the loop insert first values from cin

  similar to dont be Last
  array of cows, 1 to 10, first value assigned during first sighting
  use cases to check which cow has been sighted and assign 1 or 0 respectively
  use cases to check which cow has been sighted
    if a cow is sighted again (if a == 3), check if the abs(stored value - new value) = 1
      if true, increment a totalcrossings variable and set that cow to the new value
      if (abs(index[i]-side)==1) {
        break;
      }
  cout << totalcrossings <<endl;
  int n
  cin >> n;
  for i < n
  cin x y
  for i < n
  */
}
