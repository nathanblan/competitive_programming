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
vector<string> vec;
int main() {
  freopen("gift1.in", "r", stdin);
  freopen("gift1.out", "w", stdout);
  cin >> NP; //number of friends
  for (int i=0;i<NP;i++) {// create a map with index of names
    cin >> name;
    names[name] = 0;//set to 0, add with each transaction
    vec.push_back(name);// set order of names
  }
  //NP groups of people with gift assignments, iterate to complete each transaction
  for (int i=0; i<NP; i++) {
    cin >> giver;
    cin >> amount >> people;
    if (amount != 0) {
      int app = (amount - (amount%people)) / people; //app = amount per person
      for (int j=0; j<people; j++) {
        cin >> gifted;
        names[gifted] += app;//add transaction to the everyone mentioned by giver
      }
      names[giver] += ((amount%people) - amount); //transaction for giver
    }
    else {
      continue;
    }
  }
  for (int i=0; i<vec.size(); i++) {
        cout << vec[i] << " " << names.find(vec[i])->second << endl;
  }
}
