
#include <bits/stdc++.h>

using namespace std;

int N, K;
//add strings until length of strings > K, then switch to a new line. Omit spaces when adding strings
int main() {
  cin >> N >> K;
  string text[100];
  string text_length;
  string return_text;
  int j = 0;
  for (int i = 0; i < N; i++) {
    cin >> text[i];
  }
  for (int i = 0; i < N; i++) {
      return_text = text[i] + " ";
      //cout << return_text;
      text_length += text[i];
      j++;
      if (text_length.size() > K) {
        cout << return_text << endl;
        text_length.clear();
        i = j;
      }
      else {
        cout << return_text;
        i = j;
      }
  }
}

/*  string text;
  string return_text;
  string text_length;
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    cin >> text;
    return_text += text + " ";
    text_length += text;
  }
  if (text_length.size() > K) {
    cout << return_text << endl;
  }
  else {
    cout << return_text;
  }
  return 0;
  */
