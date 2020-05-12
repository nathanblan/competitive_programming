#include <iostream>
using namespace std;

int main() {
  //create an array as the range of values the bill boards can be in
  int canvas [2000][2000] = 0;
  //create array with values of bill board 1 which is nested in canvas
  for (int i = leftx; i < rightx; i++) {
    for (int j = bottomy; j < topy; j++) {
      matrix[i][j] = 1;
    }
  }
  //create array with values of bill board 2 which is nested in canvas
  for (int i = leftx2; i < rightx2; i++) {
    for (int j = bottomy2; j < topy2; j++) {
      matrix[i][j] = 1;
    }
  }
  //create array with values of truck (which can overlap bill boards, thus replace those values)
  //count total numbers of bill board values
  for (int i = leftx3; i < rightx3; i++) {
    for (int j = bottomy3; j < topy3; j++) {
      matrix[i][j] = 0;
    }
  }
}
