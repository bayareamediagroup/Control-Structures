#include <cstring>
#include <iomanip>
#include <iostream>

#include "bureau.hpp"

using namespace std;

static void searchList(const search_t *list, const int size)
{
  int i = 0;
  string term;

  while(i < size) {
    cout << "Search? " << endl;
    cin.ignore();
    getline(cin, term);

    cout << "Name" << " Phone " <<  " Fee " << " Topic " << endl;

    for(int i = 0; i < size; i++)
    {
      if(list[i].name == term)
      {
        cout << list[i].name << " " << list[i].phone << " " << list[i].fee << " " << list[i].topic << endl;
      }
    }
    i += 1;
  };
}

static void getData(const search_t *list, const int r)
{
  for(int j = 0; j < r; j++)
  {
    cout << list[j].name << endl;
  }
}

static void setData(search_t *s, const int &size)
{
  int cnt = 0;

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

  //  getData(s, size);
}

int main(void)
{
  int i = 0, size = 0;

  cout << "How many records would you like to create? ";

  cin >> size;

  search_t s[size] = {0.0, 5096599, "Patrick", "Coding"};

  setData(s, size);

  searchList(s, size);

  return 0;
}
