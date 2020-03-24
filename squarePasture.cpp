#include<random>
#include<iostream>
#include<cmath>

using namespace std;

//given 4 points from a range of 1 to 10, each pair defining a rectangle, find the smallest square to incorporate them both into a singular new square
//create points using a random generator funtion which enters each value as a x/y coordinate.
int main()  {
  int y, Y, x, X;
  double newSquare;
  cin >> y;
  cin >> Y;
  cin >> x;
  cin >> X;
  double dy = Y - y;
  double dx = X - x;

  if ( dy > dx ) {
    newSquare = dy * dy;
  }
  newSquare = dx * dx;
  cout << newSquare << endl;
}
//subtract lowest y value from highest y value
//subtract lowest x value from highest x value
//evaluate d(y) > d(x), square which ever value is greater.
//return that value as the new square.
