#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int bestTime, worstTime;

int main() {
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);
  cin >> a >> b >> c;
  bool inOrder = false;
  int shortTime = 1;

    int cows[3];
    cows[0] = a;
    cows[1] = b;
    cows[3] = c;
    int n = sizeof(cows)/sizeof(cows[0]);
    sort(cows, cows+n);

    while (inOrder = false) {
      c = (a + b)/2;
      if (b == a+1 && c == b+1) {
        cout << shortTime << endl;
        inOrder = true;
      } else {
        sort(cows, cows+n);
          shortTime++;
    }
  }
}
