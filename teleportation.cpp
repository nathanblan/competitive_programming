#include <bits/stdc++.h>

using namespace std;
//input
int a, b, x, y;
//store distance calculations
int d1, d2;

int main() {
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);
  cin >> a >> b >> x >> y;
  if (max(a, b) - min(a, b) > max(x, y) - min(x, y)); {
    d1 = max(min(a, b), min(x, y)) - min(min(a, b), min(x, y));
    d2 = max(max(a, b), max(x, y)) - min(max(a, b), max(x, y));
    cout << d1 + d2 << endl;
  }
  else {
    cout << max(a, b) - min(a, b) << endl;
  }
}
