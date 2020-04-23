#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

int main() {
  int M = 1000;
  int D = 500;
  int L = 100;
  int X = 10;
  int V = 5;
  int I = 1;

  int num = 0;
  cout << "Enter a roman numeral: ";
  string roman;
  cin >> roman;
  string sub = roman.substr(0, 2);
  cout << sub << endl;

  for (int i = 0; i < roman.length(); i++) {
    switch (roman.at(i))
    {
      case 'M':
      case 'm':
        num += M;
        break;
      case 'D':
      case 'd':
        num += D;
        break;
      case 'L':
      case 'l':
        num += L;
        break;
      case 'X':
      case 'x':
        num += M;
        break;
      case 'V':
      case 'v':
        num += V;
        break;
      case 'I':
      case 'i':
        num += I;
        break;
    }
  }
  cout << num << endl;
}
