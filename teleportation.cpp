#include <bits/stdc++.h>

using namespace std;
//input
int a, b, x, y;
//store distance calculations
int d1, d2;

int main() {
  fin teleport.in;
  fout teleport.out;
  if (max(a, b) - min(a, b) > max(x, y) - min(x, y)); {
    d1 = max(min(a, b), min(x, y)) - min(min(a, b), min(x, y));
    d2 = max(max(a, b), max(x, y)) - min(max(a, b), max(x, y));
    return d1 + d2;
  }
  else {
    return max(a, b) - min(a, b);
  }
}
