#include<iostream>
using namespace std;

int leftx, bottomy, rightx, topy, leftx2, bottomy2, rightx2, topy2, leftTruckX, rightTruckX, bottomTruckY, topTruckY;

int main() {
  cin >> leftx >> bottomy >> rightx >> topy;
  cin >> leftx2 >> bottomy2 >> rightx2 >> topy2;
  cin >> leftTruckX >> rightTruckX >> bottomTruckY>> topTruckY;

  //create an array as the range of values the bill boards can be in
  int range [500][500];
  for (int i = 0; i < 500; i++) {
    for (int j = 0; j < 500; j++) {
      range[i][j] = 0;
        }
      }
  for (int i = leftx; i < rightx; i++) {
    for (int j = bottomy; j < topy; j++) {
      range[i][j] = 1;
        }
      }
  for (int i = leftx2; i < rightx2; i++) {
    for (int j = bottomy2; j < topy2; j++) {
      range[i][j] = 1;
        }
      }
  for (int i = leftTruckX; i < rightTruckX; i++) {
    for (int j = bottomTruckY; j < topTruckY; j++) {
      range[i][j] = 0;
    }
  }

  int visible = 0;
  for (int i = 0; i < 500; i++) {
    for (int j = 0; j < 500; j++) {
      if (range[i][j] == 1) {
        visible += 1;
      }
    }
  }

  cout<< visible << endl;
  return 0;
}
