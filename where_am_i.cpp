#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<set>
using namespace std;

int N;
string S;

bool dups(int len)
{
  set<string> X;
  for (int i=0; i<=N-len; i++) {
    if (X.count(S.substr(i,len)) > 0) return true;
    X.insert(S.substr(i,len));
  }
  return false;
}

int main(void)
{
  ifstream fin ("whereami.in");
  ofstream fout ("whereami.out");
  fin >> N >> S;
  int ans = 1;
  while (dups(ans)) ans++;
  fout << ans << "\n";
  return 0;
}
/*int N, K;

int main() {
  ifstream cin("gymnastics.in");
  ofstream cout("gymnastics.out");
  cin >> K >> N;
  string farms;
  //loop through the sequence N to check if each value of length K is too small. K works if there are no two sequences of len K in the sequence N
  //using an array to store each permutation, check if that permutation occurs twice
  for (k = 1; k < 100; k++) {
    for (i = 0; i < N; i++) {
      farms.substr(i, K);
      if (substr does not repeat) {
        cout << K << endl;
        break;
      } else {
        K++;
      }
    }
  }
}
*/
