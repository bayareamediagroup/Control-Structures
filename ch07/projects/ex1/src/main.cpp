#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  const short INDEX_SIZE = 10;
  short list[INDEX_SIZE] = {0};

  cout << "Enter Ten Integers: " << endl;

  for(short i = 1; i <= INDEX_SIZE; i++)
  {
    cout << i << ". ";
    cin >> list[i - 1];
  }

  return 0;
}
