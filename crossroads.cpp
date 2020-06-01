//crossroads

#include <bits/stdc++.h>

using namespace std;


int main() {
  freopen("crossroad.in", "r", stdin);
  freopen("crossroad.out", "w", stdout);
  
  int N, cow, side;
  int index[10]; //array to store cows values
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
  bool j = false;
  bool k = false;

  cin >> N; //define amount of sightings
  int total = 0;

  for (int i=0; i<N; i++) { //go through the list
    cin >> cow >> side;
  /*  if (cow == 3) {
      if (a) {//skip on first sighting, run on second
        if (abs(index[2]-side)==1) {// check if crossroad
          total++; //if did cross road, increment total crossings
        }
      }
      index[2]=side; //assign the first side of the cow
      a = true; //lets us know weve seen this cow
      //cout << "case3 ran" << endl;
      //break;
    }
    if (cow == 4) {
      if (d) {
        if (abs(index[3]-side)==1) {
          total++;
          cout << "increment4" <<endl;
        }
      }
      index[3]=side;
      d = true;
      cout << "case4 ran" << endl;
      //break;
    } */

    switch(cow){ //use cases to check which cow has been sighted and assign the first value
      case 1:
        if (a) {//skip on first sighting, run on second
          if (abs(index[0]-side)==1) {// check if crossroad
            total++; //if did cross road, increment total crossings
          }
        }
        index[0]=side; //assign the first side of the cow
        a = true; //lets us know weve seen this cow
        break;
      case 2:
        if (b) {
          if (abs(index[1]-side)==1) {
            total++;
          }
        }
        index[1]=side;
        b = true;
        break;
      case 3:
        if (c) {
          if (abs(index[2]-side)==1) {
            total++;
            //cout << "increment3" <<endl; testing
          }
        }
        index[2]=side;
        c = true;
        break;
      case 4:
        if (d) {
          if (abs(index[3]-side)==1) {
            total++;
            //cout << "increment4" <<endl; testing
          }
        }
        index[3]=side;
        d = true;
        break;
      case 5:
        if (e) {
          if (abs(index[4]-side)==1) {
            total++;
          }
        }
        index[4]=side;
        e = true;
        break;
      case 6:
      if (f) {
          if (abs(index[5]-side)==1) {
            total++;
          }
        }
        index[5]=side;
        f = true;
        break;
      case 7:
        if (g) {
          if (abs(index[6]-side)==1) {
            total++;
          }
        }
        index[6]=side;
        g = true;
        break;
      case 8:
        if (h) {
          if (abs(index[7]-side)==1) {
            total++;
          }
        }
        index[7]=side;
        h = true;
        break;
      case 9:
        if (j) {
          if (abs(index[8]-side)==1) {
            total++;
          }
        }
        index[8]=side;
        j = true;
        break;
      case 10:
        if (k) {
          if (abs(index[9]-side)==1) {
            total++;
          }
        }
        index[9]=side;
        k = true;
        break;
      }
    }

    cout << total << endl;
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
