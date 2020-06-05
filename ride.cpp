/*
ID: nathanb2
TASK: ride
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

string group;
string comet;
int groupsum = 0, cometsum = 0;

int assignGroup();

int main() {
  freopen("ride.in", "r", stdin);
  freopen("ride.out", "w", stdout);

  cin >> group;
  cin >> comet;

}
int assignGroup() {
  for (int i = 0; i < 6; i++) {
    if (group[i])== "A") {groupsum += 1;}
    if (group[i] == "B") {groupsum += 2;}
    if (group[i] == "C") {groupsum += 3;}
    if (group[i] == "D") {groupsum += 4;}
    if (group[i] == "E") {groupsum += 5;}
    if (group[i] == "F") {groupsum += 6;}
    if (group[i] == "G") {groupsum += 7;}
    if (group[i] == "H") {groupsum += 8;}
    if (group[i] == "I") {groupsum += 9;}
    if (group[i] == "J") {groupsum += 10;}
    if (group[i] == "K") {groupsum += 11;}
    if (group[i] == "L") {groupsum += 12;}
    if (group[i] == "M") {groupsum += 13;}
    if (group[i] == "N") {groupsum += 14;}
    if (group[i] == "O") {groupsum += 15;}
    if (group[i] == "P") {groupsum += 16;}
    if (group[i] == "Q") {groupsum += 17;}
    if (group[i] == "R") {groupsum += 18;}
    if (group[i] == "S") {groupsum += 19;}
    if (group[i] == "T") {groupsum += 20;}
    if (group[i] == "U") {groupsum += 21;}
    if (group[i] == "V") {groupsum += 22;}
    if (group[i] == "W") {groupsum += 23;}
    if (group[i] == "X") {groupsum += 24;}
    if (group[i] == "Y") {groupsum += 25;}
    if (group[i] == "Z") {groupsum += 26;}
  }
}
