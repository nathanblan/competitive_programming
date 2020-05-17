#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>

using namespace std;

int N, K;

int main() {
  ifstream cin("gymnastics.in");
  ofstream cout("gymnastics.out");
  cin >> K >> N;
  string farms;
  //loop through the sequence N to check if each value of length K is too small. K works if there are no two sequences of len K in the sequence N
  //using an array to store each permutation, check if that permutation occurs twice 
  for (k = 1; k < 100; k++) {
    for (i = 0; i < N; i++) {
      farms.substr(i, K);
      if (substr does not repeat) {
        cout << K << endl;
        break;
      } else {
        K++;
      }
    }
  }
}
