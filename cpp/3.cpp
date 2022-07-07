#include <iostream>
using namespace std;
int findGreatestNumber (int, int, int);
int main() {
  int num_1, num _2, num_3;
  cout << "Enter Three Numbers:\n";
  cin >> num_l >> num_2 >> num_3;

  findGreatestNumber(num_1, num_2, num_3);

  return 0;
}

findGreatestNumber (int num_l, int num_2, int num_3) {

  if(num_l > num_2 && num_l >num_3) {
    cout << num_l << " is greatest";
  }
  else if(num_2 > num_l && num_2 >num_3){
    cout << num 2 << " is greatest";
  }  
  else if(num_3 > num_2 && num 3 >num_1){
    cout << num_3 << " is greatest";
  }  
}
