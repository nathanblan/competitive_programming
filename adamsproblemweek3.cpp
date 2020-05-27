/*(Adam) Write a program that takes an integer input n and prints the sum of all numbers up to n that aren’t multiples of 3.
that one as sped as u can */
#include <bits/stdc++.h>

using namespace std;

int n;
int sum = 0;

int main() {
  cin >> n;
  for (int i = 0; i < n+1; i++) {
    if (i % 3 == 0) {
      continue;
    }
    sum += i;
  }
  cout << sum << endl;
}
