/*
ID: nathanb2
TASK: gift1
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int NP;

int main() {
  freopen("gift1.in", "r", stdin);
  freopen("gift1.out", "w", stdout);
  cin NP;
}
/*
cin amount of people
for amount of people
  cin ppl as vector
if amount > 0
  cin >> person
  cin >> amount >> recipients
  cin people
  amount per person = amount - (amount % recipients) / recipients
  add amount % ppl to givers account
  for recipients
    add amount per person to each person
*/
