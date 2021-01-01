#include <iostream>
#include <string>

using namespace std;

void showAttendance(int &b)
{
    b = 43;
}

void checkAttendance(int l[], int s)
{

    int *listPtr = l;

    cout << "The 1st element of l is: " << *(l + 0) << endl;
    cout << "The 2nd element of l is: " << *(l + 1) << endl;
    cout << "The 3rd element of l is: " << *(l + 2) << endl;
    cout << "The 4th element of l is: " << *(l + 3) << endl;
    cout << "The 5th element of l is: " << *(l + 4) << endl;

    for(int i = 0; i < s; i++)
    {
        cout << "->" << l[i] << endl;
    }

    for(int j = 0; j < s; j++)
    {
        cout << "Pointer Arithmetic: " << *(l + j) << endl;
    }

    for(int k = 0; k < s; k++)
    {
      cout << "Backward: " << *listPtr << endl;
      listPtr++;
    }
}

int main(void)
{
  int a = 10;
  int b;
  int c;
  int *ptr = nullptr;
  int list[] = { 43, 45, 76, 87, 3 };

  ptr = &b;
  *ptr = 23;

  ptr = &c;
  *ptr = 85;

  checkAttendance(list, 5);

  cout << "The old value of a is: " << a << endl;

  showAttendance(a);

  cout << "The new value of a is: " << a << endl;
  cout << "The new value of ptr is: " << *ptr << endl;
  cout << "The new values of b and c are: " << b << " & " << c << endl;

  return 0;
}
