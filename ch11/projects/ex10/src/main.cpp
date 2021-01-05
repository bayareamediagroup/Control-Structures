#include <cstring>
#include <iomanip>
#include <iostream>

#include "bureau.hpp"

using namespace std;

static void getData(search_t *l, int r)
{
  for(int j = 0; j < r; j++)
  {
    cout << l[j].name << endl;
  }
}

static void setData(search_t *s, const int &size)
{
  int cnt = 0;

  cout << "Enter Name, Phone Number, Speaking Topic and Speaker Fee:" << endl;

  while(cnt < size)
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

  getData(s, size);
}

int main(void)
{
  int size = 0;

  cout << "How many records would you like to create? ";

  cin >> size;

  search_t s[size] = {0.0, 5096599, "Patrick", "Coding"};

  setData(s, size);

  return 0;
}
