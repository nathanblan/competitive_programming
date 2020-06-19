/*
ID: nathanb2
TASK: gift1
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int NP;
int amount, people;
string name, gifted, giver;
map<string,int> names;
int main() {
//  freopen("gift1.in", "r", stdin);
//  freopen("gift1.out", "w", stdout);
  cin >> NP; //number of friends
  for (int i=0;i<NP;i++) {// create a map with index of names
    cin >> name;
    names[name] = 0;//set to 0, add with each transaction
  }
  //NP groups of people with gift assignments, iterate to complete each transaction
  for (int i=0; i<NP; i++) {
    cin >> giver;
    cin >> amount >> people;
    int app = (amount - (amount%people)) / people //app = amount per person
    for (int j=0;j<people;j++) {
      cin >> gifted;
      names[gifted] += app;
    }
    names[giver] += ((amount%people) - amount);
  }
  for (i = 0; i < NP; i++)
    cout << names[i] + amount[i] << endl;
}
/*
cin amount of people NP
for amount of people
  cin ppl as vector[i]
if amount > 0
  cin >> person
  cin >> amount >> recipients
  cin people
  amount per person = amount - (amount % recipients) / recipients
  giver - amount add (amount % ppl)
  for recipients
    add amount per person to each person

for (i = 0; i < amount of people; i++)
  cout << name[i] and amount[i] << endl;
*/
