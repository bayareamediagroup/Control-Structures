#include <iostream>
#include <string>

using namespace std;

/* Dynamic Memory Allocation */

void step_time()
{
  int *iptr = nullptr;
  int average = 0, elements = 0, total = 0;

  cout << "How many elements would you like to create? ";
  cin >> elements;
  iptr = new int[elements];

  for (int k = 0; k < elements; k++)
  {
    cout << "Day" << (k + 1) << endl;
    cin >> iptr[k];
  }

  for (int k = 0; k < elements; k++)
  {
    total += iptr[k];
  }

  average = (total / elements);

  cout << "Total: " << average << endl;
  delete[] iptr;
  iptr = nullptr;
}

void calculateNumber(const int *number, int *rank, int &sup)
{
  *rank += 50;
  sup = 4000;
  cout << "The number d is: " << *number << " " << *rank << " -> " << sup << endl;
}

void example()
{
  const int INDEX_SIZE = 3;

  int *ptrSet = nullptr;

  int set[INDEX_SIZE] = {10, 20, 30};
  // ptrSet->set
  ptrSet = set;

  cout << "This points to the first element of the array: " << *ptrSet << endl;

  for (int i = 0; i < INDEX_SIZE; i++)
  {
    cout << "[" << *(ptrSet + i) << "]" << endl;
  }

  while (ptrSet <= &set[2])
  {
    cout << "x: " << *ptrSet << " ";
    ptrSet++;
  }
  cout << endl;
}

int showNum(int num)
{
  return num;
}

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

  for (int i = 0; i < s; i++)
  {
    cout << "->" << l[i] << endl;
  }

  for (int j = 0; j < s; j++)
  {
    cout << "Pointer Arithmetic: " << *(l + j) << endl;
  }

  for (int k = 0; k < s; k++)
  {
    cout << "Backward: " << *listPtr << endl;
    listPtr++;
  }
}

void getMoney(int *m, int size)
{
  cout << "This is the first element of money: " << *m << endl;
  for (int j = 0; j < size; j++)
  {
    cout << "Each element of money: " << *(m + j) << endl;
  }
}

int main(void)
{
  int a = 10;
  int b;
  int c;
  int d = 3;
  int r = 10;
  int s = 200;

  int money[4] = {55, 66, 77, 88};
  int *ptr = nullptr;
  int list[] = {43, 45, 76, 87, 3};

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

  example();
  calculateNumber(&d, &r, s);
  getMoney(money, 4);

  /* step_time is actually the assignment */
  step_time();

  return 0;
}