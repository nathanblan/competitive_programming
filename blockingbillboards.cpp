#include <iostream>
using namespace std;

int leftx, bottomy, rightx, topy, leftx2, bottomy2, rightx2, topy2, leftTruckX, rightTruckX, bottomTruckY, topTruckY;

int main() {
  cin >> leftx >> bottomy;
  cin >> rightx >> topy;
  cin >> leftx2 >> bottomy2;
  cin >> rightx2 >> topy2;
  cin >> leftTruckX >> rightTruckX;
  cin >> bottomTruckY>> topTruckY;

  //create an array as the range of values the bill boards can be in
  int canvas [2001][2001];
  for (int k = 0; k < 2001; k++) {
    for (int l = 0; l < 2001; l++) {
      canvas[k][l] = 0;
    }
  }
  //create array with values of bill board 1 which is nested in canvas
  int billBoard1 [0][0];
  for (int i = leftx; i < rightx; i++) {
    for (int j = bottomy; j < topy; j++) {
      billBoard1[i][j] = 1;
    }
  }
  //create array with values of bill board 2 which is nested in canvas
  int billBoard2 [0][0];
  for (int i = leftx2; i < rightx2; i++) {
    for (int j = bottomy2; j < topy2; j++) {
      billBoard2[i][j] = 1;
    }
  }
  //create array with values of truck (which can overlap bill boards, thus replace those values)
  int truck [0][0];
  for (int i = leftTruckX; i < rightTruckX; i++) {
    for (int j = bottomTruckY; j < topTruckY; j++) {
      truck[i][j] = 0;
    }
  }
  //count total numbers of bill board values
  int visible = 0;
  for (int c = 0; c < 2001; c++) {
    for (int d = 0; d < 2001; d++) {
      if (c || d == 1) {
        visible += 1;
      }
    }
  }
  cout<< visible << endl;
  return 0;
}
