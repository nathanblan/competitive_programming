#include <bits/stdc++.h>

using namespace std;

int N;
int min_K = 0;
string text, sub;

int main() {
  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  cin >> N;
  cin >> text;

  for (int i = 0; i < N; i++) {
    for (int K = 1; K <= N - i; K++) {
      sub = text.substr(i, K);
      if (sub.length() != 1) {
        int found = text.find(sub, 0);
        found = text.find(sub, found+1);
        if (found == string::npos) {
          min_K = K;
        }
      }
    }
  }
  cout << min_K << endl;
}

/*
single char don't count
if (sub.length() == 1)
find the minimum K that works for each by storing min K in a variable
*/
