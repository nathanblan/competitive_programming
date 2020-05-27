/*(Adam) Write a program that takes an integer input n and prints the sum of all numbers up to n that aren’t multiples of 3.
that one as sped as u can */
#include <bits/stdc++.h>

using namespace std;

int n;
int sum = 0;
bool prime = true;
int main() {
  cin >> n;
  for (int i = 2; i < sqrt(n+1); i++) {
    if (n%i == 0) {
      prime = false;
      cout << "false" << endl;
      break;
    }
  }
  if (prime == true)
    cout << "true" << endl;
}
