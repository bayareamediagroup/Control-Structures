#include <iostream>
#include <string>

using namespace std;

void showAttendance(int &b)
{
    b = 43;
}

void checkAttendance(int l[], int s)
{
    for(int i = 0; i < s; i++)
    {
        cout << "->" << l[i] << endl;
    }
}

int main(void)
{
  int a = 10;
  int list[] = { 43, 45, 76, 87, 3 };
  checkAttendance(list, 5);

  cout << "The old value of a is: " << a << endl;

  showAttendance(a);

  cout << "The new value of a is: " << a << endl;

  return 0;
}
