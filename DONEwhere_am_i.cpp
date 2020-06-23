#include <bits/stdc++.h>

using namespace std;

int N;
int max_K = 0;
string text, sub;

int main() {
  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  cin >> N;
  cin >> text;

  for (int i = 0; i < N; i++) {
    for (int K = 1; K <= N-i; K++) {
      sub = text.substr(i, K);
      if (sub.length() != 1) {
        int found = text.find(sub, 0);
        found = text.find(sub, found+1);
        if (found != string::npos) { //finds second instance of the substr
          if (K > max_K) {
            max_K = K;
          }
        }
      }
    }
  }
  cout << max_K+1 << endl;
}

/*
(max K that has a repetion)+1

*/
