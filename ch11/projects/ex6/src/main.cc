#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>

#include "soccer.h"

#define SIZE 5

using namespace std;

/*
 * Todo
 * 1. The number and name of the play who has earned the most points should also be displayed.
 * * */

static void display(const soccer_t *l, int total)
{
  int i;
  for(i = 0; i < SIZE; i++)
  {
    cout << l[i].name << setw(10) << l[i].number << setw(10) << l[i].points << endl;
  }
  cout << "Total Points: " << setw(10) << total << endl;
}

static void collect_scores(soccer_t *s, int i)
{
  cout << "Enter Name, Number and Points scored per player " << i << endl;

  cout << "Name: ";
  cin.ignore();
  getline(cin, s->name);

  cout << "Number: ";
  cin >> s->number;

  cout << "Points Scored: ";
  cin >> s->points;

  cout << endl;
}

int main(void)
{
  int cnt = 0;
  int total_points = 0;
  soccer_t soccer[SIZE];

  do {
    collect_scores(&soccer[cnt], cnt);
    total_points += soccer[cnt].points;
    cnt++;
  } while(cnt < SIZE);

  display(soccer, total_points);

  return 0;
}
