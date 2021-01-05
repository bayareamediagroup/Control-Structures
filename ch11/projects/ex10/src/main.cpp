#include <cstring>
#include <iomanip>
#include <iostream>

#include "bureau.hpp"

#define INDEX_SIZE 3

using namespace std;

static void getData(search_t *l)
{
  for(int j = 0; j < INDEX_SIZE; j++)
  {
    cout << l[j].name << endl;
  }
}

static void setData(search_t *s)
{
  int cnt = 0;

  cout << "Enter Name, Phone Number, Speaking Topic and Speaker Fee:" << endl;

  while(cnt < INDEX_SIZE)
  {
    cout << cnt << ") ";
    cout << "\tName: " ;
    cin.ignore();
    getline(cin, s[cnt].name);

    cout << "\tPhone Number: ";
    cin >> s[cnt].phone;

    cout << "\tSpeaking Topic: ";
    cin.ignore();
    getline(cin, s[cnt].topic);

    cout << "\tSpeaker Fee: ";
    cin >> s[cnt].fee;
    cout << endl;
    cnt += 1;
  };

  getData(s);
}

int main(void)
{
  search_t s[INDEX_SIZE] = {0.0, 5096599, "Patrick", "Coding"};

  setData(s);

  return 0;
}
