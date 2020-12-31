#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  const short INDEX_SIZE = 3;
  short list[INDEX_SIZE] = {0};

  short *ptr = nullptr;

  ptr = list;

  cout << "Enter Ten Integers: " << endl;

  for(short i = 1; i <= INDEX_SIZE; i++)
  {
    cout << i << ". ";
    cin >> list[i - 1];
  }

  for(int j = 1; j <= INDEX_SIZE; j++) {
    cout << *ptr << " - ";
    ptr += 1;
  }

  cout << endl << "There you have it!" << endl;

  return 0;
}
