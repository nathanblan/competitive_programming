//friday USACO Training site

#include <bits/stdc++.h>
using namespace std;

int N; //number of years
int week_day[7] = {0, 0, 0, 0, 0, 0, 0}; //array containing each day to store number of occurances of the 13th on that day
int day = 0; //day of week from 0 to 7, 0 being monday
void count13(int days_in_month);


int main() {
  //freopen("friday.in", "r", stdin);
  //freopen("friday.out", "w", stdout);

  cin >> N;
  int year = 1900;
  for (int i=0; i<N; i++) {
    if (year % 4 == 0) {
      if (year % 100 == 0) {
          if (year % 400 == 0) { //leap
            count13(31); //jan
            count13(29); //feb
            count13(31); //mar
            count13(30); //apr
            count13(31); //may
            count13(30); //jun
            count13(31); //jul
            count13(31); //aug
            count13(30); //sep
            count13(31); //oct
            count13(30); //nov
            count13(31); //dec
        } else { //reg
          count13(31); //jan
          count13(28); //feb
          count13(31); //mar
          count13(30); //apr
          count13(31); //may
          count13(30); //jun
          count13(31); //jul
          count13(31); //aug
          count13(30); //sep
          count13(31); //oct
          count13(30); //nov
          count13(31); //dec
        }
      } else { //leap
        count13(31); //jan
        count13(29); //feb
        count13(31); //mar
        count13(30); //apr
        count13(31); //may
        count13(30); //jun
        count13(31); //jul
        count13(31); //aug
        count13(30); //sep
        count13(31); //oct
        count13(30); //nov
        count13(31); //dec
      }
    } else { //reg
      count13(31); //jan
      count13(28); //feb
      count13(31); //mar
      count13(30); //apr
      count13(31); //may
      count13(30); //jun
      count13(31); //jul
      count13(31); //aug
      count13(30); //sep
      count13(31); //oct
      count13(30); //nov
      count13(31); //dec
    }
  year++;
  }
  for (int i=0; i<7; i++) {
    
    cout << week_day[i] + " "<< endl;
  }
}

void count13(int days_in_month) {
  for (int date=0; date < days_in_month; date++) { // for the days in a month
    if (date == 13) {
      week_day[day] += 1;
    } //array[day] takes the current day (from 0 to 6) and adds one to that day
    day++;
    if (day == 7) {
      day = 0;
    }
  }
}
/*
int count13(days_in_month) {
  for (int date=0; date < days_in_month; i++) { // for the days in a month
    if (date == 13) {week_day[day] += 1;} //array[day] takes the current day (from 0 to 6) and adds one to that day
    day++;
    if (day == 7) {day = 0;}
}


for (int i=0; i<N; i++) {
  if (year % 4 == 0); {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
          count13(31); //jan
          count13(29); //feb
          count13(31); //mar
          count13(30); //apr
          count13(31); //may
          count13(30); //jun
          count13(31); //jul
          count13(31); //aug
          count13(30); //sep
          count13(31); //oct
          count13(30); //nov
          count13(31); //dec
      }
    }
  }
}
  else
    count13(31); //jan
    count13(28); //feb
    count13(31); //mar
    count13(30); //apr
    count13(31); //may
    count13(30); //jun
    count13(31); //jul
    count13(31); //aug
    count13(30); //sep
    count13(31); //oct
    count13(30); //nov
    count13(31); //dec

*/
