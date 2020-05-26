#include <bits/stdc++.h>

using namespace std;
//input
int a, b, x, y;
//store distance calculations
//int d1, d2;
int teleporter, noTeleporter, teleporter2, teleportFinal;

int main() {
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);
  cin >> a >> b >> x >> y;

  teleporter = abs(a-x) + abs(b-y);
  teleporter2 = abs(a-y) + abs(b-x);
  noTeleporter = max(a, b) - min(a, b);
  teleportFinal = min(teleporter, teleporter2);
  if (teleportFinal <= noTeleporter) {
    cout << teleportFinal << endl;
  } else {
    cout << noTeleporter << endl;
  }
}
/*  int haulDistance = max(a, b) - min(a, b), teleportDistance = max(x, y) - min(x, y);

  if ( haulDistance >= teleportDistance) {
    d1 = max(min(a, b), min(x, y)) - min(min(a, b), min(x, y));
    d2 = max(max(a, b), max(x, y)) - min(max(a, b), max(x, y));
    cout << d1 + d2 << endl;
  }
  else {
    cout << max(a, b) - min(a, b) << endl;
  }*/
