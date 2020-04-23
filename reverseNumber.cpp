#include <stdio.h>
//needs to be rewritten in C++, this is C code. Use cin and cout instead.
int main() {
  int n, rev = 0, remainder;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) {
    remainder = n % 10;
    rev = rev * 10 + remainder;
    n /= 10;
  }
  printf("Reversed number = %d", rev);
  return 0;
}
