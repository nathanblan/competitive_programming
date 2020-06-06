/*
ID: nathanb2
TASK: ride
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

string group;
string comet;
int totalg =1;
int totalc =1;

int main() {
  freopen("ride.in", "r", stdin);
  freopen("ride.out", "w", stdout);

  cin >> group;
  cin >> comet;
  for (int i = 0; i < group.length(); i++) {
    totalg *= group[i] - 65 +1;
  }
  for (int i = 0; i < comet.length(); i++) {
    totalc *= comet[i] - 65 +1;
  }
  if (totalc%47 == totalg%47) {
    cout << "GO" << endl;
  } else {
    cout << "STAY" << endl;
  }
}
