#include <bits/stdc++.h>

using namespace std;

int N;
string text, sub;

int main() {
//  freopen("whereami.in", "r", stdin);
//  freopen("whereami.out", "w", stdout);
  cin >> N;
  cin >> text;

  for (int i = 0; i < N; i++) {
    for (int len = 1; len <= N - i; len++) {
      sub = text.substr(i, len);
      cout << sub << endl;
    }
  }
}

/*
single char don't count
if (sub.length() == 1)
find the minimum K that works for each by storing min K in a variable
*/
