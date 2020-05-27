#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int bestTime, worstTime;

int main() {
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);
  cin >> a >> b >> c;
  bool inOrder = false;
  bool inOrder2 = false;
  int bestTime = 1;
  int worstTime = 1;
  //bestTime
  int aNew = a, bNew = b, cNew = c;
  int cows[3];
  cows[0] = aNew;
  cows[1] = bNew;
  cows[2] = cNew;
  sort(cows, cows+3);

  int aNew = cows[0], bNew = cows[1], cNew = cows[2];
  while (!inOrder) {
    cNew = (aNew + bNew)/2;
    if (bNew == aNew+1 && cNew == b+1) {
      cout << bestTime << endl;
      inOrder = true;
    } else {
      sort(cows, cows+n);
      bestTime++;
    }
  }
  //worstTime
  int cows[3];
  cows[0] = a;
  cows[1] = b;
  cows[2] = c;
  sort(cows, cows+3);

  //evalutate for pos c
  int pair1 = b-a;
  int pair2 = c-b;
  if (pair1 < pair2) {
    while (!inOrder2) {
      int a = cows[0], b = cows[1], c = cows[2];
      if (b == a+1 && c == b+1) {
        cout << worstTime << endl;
        inOrder2 = true;
      } else {
        a = b+1;
        sort(cows, cows+n);
        worstTime++;
      }
    }
  } else {
    while (!inOrder2) {
      int a = cows[0], b = cows[1], c = cows[2];
      if (b == a+1 && c == b+1) {
        cout << worstTime << endl;
        inOrder2 = true;
      } else {
        c = b-1;
        sort(cows, cows+n);
        worstTime++;
      }
    }
  }
}
