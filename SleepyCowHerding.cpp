#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int bestTime, worstTime;

int main() {
  //freopen("herding.in", "r", stdin);
  //freopen("herding.out", "w", stdout);
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

  int pair1 = bNew-aNew;
  int pair2 = cNew-bNew;
  if (pair1 < pair2) {
    aNew = cows[0], bNew = cows[1], cNew = cows[2];
    while (!inOrder) {
      cNew = (aNew + bNew)/2;
      if (bNew == aNew+1 && cNew == bNew+1) {
        cout << bestTime << endl;
        inOrder = true;
      } else {
        sort(cows, cows+3);
        bestTime++;
      }
    }
  } else {
    aNew = cows[0], bNew = cows[1], cNew = cows[2];
    while (!inOrder) {
      aNew = (bNew + cNew)/2;
      if (bNew == aNew+1 && cNew == bNew+1) {
        cout << bestTime << endl;
        inOrder = true;
      } else {
        sort(cows, cows+3);
        bestTime++;
      }
    }
  }

  //worstTime
  cows[3];
  cows[0] = a;
  cows[1] = b;
  cows[2] = c;
  sort(cows, cows+3);

  //evalutate for pos c
  pair1 = b-a;
  pair2 = c-b;
  if (pair1 < pair2) {
    while (!inOrder2) {
      int a = cows[0], b = cows[1], c = cows[2];
      if (b == a+1 && c == b+1) {
        cout << worstTime << endl;
        inOrder2 = true;
      } else {
        a = b+1;
        sort(cows, cows+3);
        worstTime++;
      }
    }
  } else {
    while (!inOrder2) {
      a = cows[0], b = cows[1], c = cows[2];
      if (b == a+1 && c == b+1) {
        cout << worstTime << endl;
        inOrder2 = true;
      } else {
        c = b-1;
        sort(cows, cows+3);
        worstTime++;
      }
    }
  }
}
