//Dont Be Last!!
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

  int N, tempc, cowName;
  string tempn;
  cin >> N;
//  map<string, int> cows;
  for (int i = 0; i < N; i++) {
    cin >> tempn >> tempc;
//      cows.insert(pair<string, int>(tempn, tempc));

    if (tempn == "Bessie") cows[0] += tempc;
    //repeat this for each of the cows
    if (tempn == "Elsie") cows[1] += tempc;
    if (tempn == "Daisy") cows[2] += tempc;
    if (tempn == "Gertie") cows[3] += tempc;
    if (tempn == "Annabelle") cows[4] += tempc;
    if (tempn == "Maggie") cows[5] += tempc;
    if (tempn == "Henrietta") cows[6] += tempc;
  }

  int min1 = 101, checkRepeat;
//find smallest values, set them to an absurdly high amount
  for (int i = 0; i < 7; i++) {
    min1=min(min1, cows[i]);
    if (min1 == cows[i]) {
      cows[i]=101;
    }
  }
//find the new smallest values, assign the a cow to it, make them super large so we can check for repeat
  min1 = 101;
  int count = 0;
  for (int i = 0; i < 7; i++) {
    min1=min(min1, cows[i]);
    if (min1 == cows[i]) {
      checkRepeat = cows[i];
      cowName = i;
      cows[i] = 101;
    }
  }
//check repeat by
  min1 = 101;
  for (int i = 0; i < 7; i++) {
    min1=min(min1, cows[i]);
    if (min1 == cows[i]) {
      if (min1 == checkRepeat) {
        cout << "Tie" << endl;
        break;
      }
    }
  }
  if (min1 != checkRepeat) {
    if (cowName == 0) cout << "Bessie" << endl;
    if (cowName == 1) cout << "Elsie" << endl;
    if (cowName == 2) cout << "Daisy" << endl;
    if (cowName == 3) cout << "Gertie" << endl;
    if (cowName == 4) cout << "Annabelle" << endl;
    if (cowName == 5) cout << "Maggie" << endl;
    if (cowName == 6) cout << "Henrietta" << endl;
  }
}

//String Bessie, Elsie, Daisy, Gertie, Annabelle, Maggie, and Henrietta;
//string cows[7] = {/*"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"*/};
