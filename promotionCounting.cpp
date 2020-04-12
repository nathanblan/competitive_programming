#include<iostream>
#include<cmath>

using namespace std;

/*Input consists of four lines, each containing two integers in the range 0..1,000,000.
The first line specifies the number of bronze participants registered before and after the contest.
The second line specifies the number of silver participants before and after the contest.
The third line specifies the number of gold participants before and after the contest.
The last line specifies the number of platinum participants before and after the contest.
output three lines, each with a single int
line 1 = bronze to silver, 2 = silver to gold, and 3 = gold to plat
promoteToPlat = plat2 -plat1, stuckInGold = gold1 - promoteToPlat, promoteToGold = gold2 - stuckInGold, stuckInSilver = silver1 - promoteToGold, promoteToSilver = silver1 - stuckInSilver*/
int plat1, plat2, gold1, gold2, silver1, silver2, stuckInGold, stuckInSilver,promoteToGold, promoteToPlat, promoteToSilver;

int main() {
  cin>> plat1 >> plat2;
  cin>> gold1 >> gold2;
  cin>> silver1 >> silver2;
  promoteToPlat = plat2 - plat1;
  stuckInGold = gold1 - promoteToPlat;
  promoteToGold = gold2 - stuckInGold;
  stuckInSilver = silver1 - promoteToGold;
  promoteToSilver = silver2 - stuckInSilver;

  cout<< promoteToPlat << endl << promoteToGold << endl << promoteToSilver << endl;
  return 0;
}
