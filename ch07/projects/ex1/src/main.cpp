#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
  int list[10] = {0};
  int cnt = 0;

  cout << "Enter Ten Integers: " << endl;

  for(int i = 0; i < 10; i++)
  {
    cout << (cnt += 1 ) << ". ";
    cin >> list[i];
  }

  return 0;
}
