#include <iostream>
using namespace std;

void swap(int*, int*); 
int main()
{
   int x, y;
 
   cout << "Enter the value of x and y\n";
   cin >> x >> y;
 
   cout << "Before Swapping x = "<< x << endl;
   cout << "Before Swapping y = "<< y << endl;
 
   swap(&x, &y);
  
   cout << "After Swapping x = "<< x << endl;
   cout << "After Swapping y = "<< y << endl;
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}
