#include<iostream>
#include<vector>
#include<cassert>
#include<fstream>

using namespace std;

ifstream fin("x.in");
ofstream fout("x.out");

int mat[100][100];
int ranks[100][100];
int n, k;
bool compare(int a, int b){
  for(int w=1;w<=k;w++){
    if(ranks[a][w]<ranks[b][w]) {
      continue;
    }
    else {
      return false;
    }
  }
  return true;
}
bool compare1(int a, int b){
  for(int w=1;w<=k;w++){
    if(ranks[a][w]>=ranks[b][w]) {
      continue;
    }
    else {
      return false;
    }
  }
  return true;
}
int main(){
  ifstream cin("gymnastics.in");
  ofstream cout("gymnastics.out");
  cin >> k>> n;
  for(int i=1;i<=k;i++){
    for(int j=1;j<=n;j++){
      int x;
      cin >> x;
      ranks[x][i]=j;
    }
  }
  int count=0;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      if(compare(i, j)){
        count++;
      }
      else if(compare1(i, j)){
        count++;
      }
    }
  }
  cout << count << endl;
}
