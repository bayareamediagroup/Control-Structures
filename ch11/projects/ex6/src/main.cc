#include <iostream>
#include <cstring>
#include <cstdio>

#include "soccer.h"

#define SIZE 2

using namespace std;

static void collect_scores(soccer_t *s, int i)
{
  cout << "Enter Name, Number and Points scored per player " << i << endl;
  getline(cin, s->fname);

  cout << "Number: " << endl;
  cin >> s->number;

  cout << "Points Scored: " << endl;
  cin >> s->points;
  cout << endl;
}

int main(void)
{
  int cnt = 1;
  soccer_t soccer[SIZE];

  do {
    collect_scores(&soccer[cnt], cnt);
    cnt++;
  } while(cnt <= SIZE);

  return 0;
}
