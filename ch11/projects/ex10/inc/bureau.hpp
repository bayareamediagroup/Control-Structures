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

static void getData(const search_t *, const int);
static void setData(search_t *, const int &);
static void searchData(const search_t *, const int &);

#endif
