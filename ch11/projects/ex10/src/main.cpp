#include <cstring>
#include <iomanip>
#include <iostream>

#include "bureau.hpp"

using namespace std;

int main(void)
{
  int cnt = 1;

  const int INDEX_SIZE = 3;

  search_t s[INDEX_SIZE] = {0.0, 5096599, "Patrick", "Coding"};

  cout << "Enter Name, Phone Number, Speaking Topic and Speaker Fee:" << endl;

  while(cnt <= INDEX_SIZE)
  {
    cout << cnt << ") ";
    cout << "\tName: " ;
    cin.ignore();
    getline(cin, s->name);

    cout << "\tPhone Number: ";
    cin >> s->phone;

    cout << "\tSpeaking Topic: ";
    cin.ignore();
    getline(cin, s->topic);

    cout << "\tSpeaker Fee: ";
    cin >> s->fee;
    cnt += 1;
  };

  return 0;
}
