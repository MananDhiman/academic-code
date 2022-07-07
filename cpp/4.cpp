#include <iostream>
using namespace std;

int main()
{
  int number, factorial = 1;
  cout << "Enter Number to Find Factorial Of:\n";
  cin >> number;
  
  for(int i = 1; i<=number; i++)
  {
    factorial = factorial*i;
  }
  
  cout << "The Factorial is: " << factorial;
  
  return 0;
}
