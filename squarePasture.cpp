#include<random>
#include<iostream>
#include<cmath>

using namespace std;

//given 4 points from a range of 1 to 10, each pair defining a rectangle, find the smallest square to incorporate them both into a singular new square
//create points using a random generator funtion which enters each value as a x/y coordinate.
int main()  {
  cout << "  enter x/y coordinates such that x1 < x2 and y1 < y2 etc" << endl;
  int x1, y1, x2, y2;
  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;
  int X1, Y1, X2, Y2;
  cin >> X1;
  cin >> Y1;
  cin >> X2;
  cin >> Y2;

  if (x2 <= x1 || X2 <= X1 || y2 <= y1 || Y2 <= Y1) {
    cout << "bruh the x/y coordinates you entered aren't possible" << endl;
  }

  int lowestX = min(x1, X1);
  int lowestY = min(y1, Y1);
  int greatestX = max(x1, X2);
  int greatestY = max(y1, Y2);

  double dX = greatestX - lowestY;
  double dY = greatestY - lowestY;

  double newSquare;
  if ( dY > dX ) {
    newSquare = dY * dY;
  }
  newSquare = dX * dX;
  cout << newSquare << endl;
}
//subtract lowest y value from highest y value
//subtract lowest x value from highest x value
//evaluate d(y) > d(x), square which ever value is greater.
//return that value as the new square.
