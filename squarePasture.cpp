#include<random>
#include<iostream>
#include<cmath>

using namespace std;

//given 4 points from a range of 1 to 10, each pair defining a rectangle, find the smallest square to incorporate them both into a singular new square
//create points using a random generator funtion which enters each value as a x/y coordinate.
//subtract lowest y value from highest y value
//subtract lowest x value from highest x value
//evaluate d(y) > d(x), square which ever value is greater.
//return that value as the new square.
