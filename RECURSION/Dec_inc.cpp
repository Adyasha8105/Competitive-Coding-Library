#include <iostream>
using namespace std;

//Increasing and decresing function
void dec(int n)
{
  //base case
  if (n == 0)
  {
    return;
  }
  // Recursive case
  cout << n << "";
}
void inc(int n)
{
  //base case
  if (n == 0)
  {
    return;
  }
  // Recursive case
  inc(n - 1);
  cout << n << "";
}
int main()
{
  int n;
  cin >> n;
  dec(n);
  cout << endl;
  inc(n);
  cout << endl;
  return 0;
}
