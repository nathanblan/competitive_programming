//notlast2 cus the first one didnt work out very well.

#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("notlast.in", "r", stdin);
  freopen("notlast.out", "w", stdout);

  int cows[7];
  cows[0] = 0;
  cows[1] = 0;
  cows[2] = 0;
  cows[3] = 0;
  cows[4] = 0;
  cows[5] = 0;
  cows[6] = 0;

  int N;
  cin >> N;

  string name;
  int tempc;
  for (int i = 0; i < N; i++) {//get the inout from notlast.in, and increment each cower respectively to get M amount of milk for each cow
    cin >> name >> tempc;
    if (name == "Bessie") cows[0] += tempc;
    if (name == "Elsie") cows[1] += tempc;
    if (name == "Daisy") cows[2] += tempc;
    if (name == "Gertie") cows[3] += tempc;
    if (name == "Annabelle") cows[4] += tempc;
    if (name == "Maggie") cows[5] += tempc;
    if (name == "Henrietta") cows[6] += tempc;
  }

  int copy[7];//create a copy of cows to find minimum
  copy[0] = cows[0];
  copy[1] = cows[1];
  copy[2] = cows[2];
  copy[3] = cows[3];
  copy[4] = cows[4];
  copy[5] = cows[5];
  copy[6] = cows[6];
  sort(copy, copy+7); //sort array to find smallest value.
  int min1 = copy[0]; //first minimum

  for (int i = 0; i < 7; i++) { //using the minimum, test if a cow is equal to it, then set it to over 9000
    if (cows[i] == min1) { // if cow at index = minimum
      cows[i] = 4206969; //set to arbitrarily high value... hehe
      //copy[i] = cows[i]; //set copy of cows to match that value
    }
  }
  copy[0] = cows[0]; //new array with updated values
  copy[1] = cows[1];
  copy[2] = cows[2];
  copy[3] = cows[3];
  copy[4] = cows[4];
  copy[5] = cows[5];
  copy[6] = cows[6];
  sort(copy, copy+7); //sort new array to find second smallest value.
  min1 = copy[0]; //second minimum

  int index;
  int count = 0;
  //FIND A WAY TO TELL IF THERE ARE MORE THAN ONE SECOND LEAST
  for (int i = 0; i < 7; i++) { //using the minimum, test if a cow is equal to it, then return it
    if (cows[i] == min1) { // if cow at index = minimum
      count++;//increments upon finding a match, and if count > 1 (or having only one match), then print tie
      index = i;//return the cow at this position
    }
  }

  if (count == 1) { //if theres only one cow then match and print that cow
    if (index == 0) cout << "Bessie" << endl;
    if (index == 1) cout << "Elsie" << endl;
    if (index == 2) cout << "Daisy" << endl;
    if (index == 3) cout << "Gertie" << endl;
    if (index == 4) cout << "Annabelle" << endl;
    if (index == 5) cout << "Maggie" << endl;
    if (index == 6) cout << "Henrietta" << endl;
  }
  else { //if count > 1 (or having only one match), then print tie
    cout << "Tie" << endl;
  }
}
  //sort copy again, and if one cow has that value, return the cow. if two or more cows, return Tie,


  /*
  int N = number of entries.
  create an array of cows that assigns a cow to an index using cases/ifs and set the value to the amount of milk produced.
  for (i < N) {
    check what cow it is, then add their milk amount amount += value
  }
  int min1 = something abitrarily high
  for (i < 7) { //find the first minimum in the array cows
    min1 = min(min1, cows[i]);

}
  */
