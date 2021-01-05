#ifndef SEARCH_H
#define SEARCH_H

using namespace std;

typedef struct
{
  double fee;
  int phone;
  string name;
  string topic;
} search_t;

static void getData(search_t *);
static void setData(search_t *, const int &);

#endif
