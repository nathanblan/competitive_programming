//USACO 2020 February Contest, Bronze, Problem 1. Triangles
//https://www.analyzemath.com/calculus/Problems/maximize_area_triangle.html
//https://math.stackexchange.com/questions/1337696/find-the-maximum-possible-area-of-a-certain-right-triangle
//to find max size, find the hypotenuse of the triangle and divide it by 2, then apply A = 1/2 base * height (base = hyptonese and height = radius)

#include <bits/stdc++.h>
using namespace std;
//using int = long long;

int main() {
  freopen("triangles.in", "r", stdin);
  freopen("triangles.out", "w", stdout);
  int n;
  cin >> n;
  vector<int> X(n,0);
  vector<int> Y(n,0);
  for (int i=0; i<n;i++) {
    cin >> X[i] >> Y[i];
  }
  int best = -1;
  for (int i=0; i<n;i++) {//corner
    for (int j=0; j<n; j++) {//same x coordinate as i
      for (int k=0; k<n; k++) {//same y coordinate as i
        if (Y[i]==Y[j] && X[i]==X[k]) {
          int area = abs(X[j]-X[i]) * abs(Y[k]-Y[i]);
          if (area > best) {
            best = area;
          }
        }
      }
    }
  }
  cout << best << endl;
}
/*
for the first line of input "N", cin x and y in an array

*/
