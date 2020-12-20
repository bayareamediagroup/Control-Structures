#include <iostream>
#include <cstring>
#include <cstdio>

#include "soccer.h"

#define SIZE 2

using namespace std;

static void collect_scores(soccer_t *s)
{
  cout << "Enter Name, Number and Points scored per player" << endl;
}

int main(void)
{
  int cnt = 0;
  soccer_t soccer[SIZE];

  do {
    collect_scores(&soccer[cnt]);
  } while(cnt <= SIZE);

  return 0;
}
