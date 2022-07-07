#include <iostream>
using namespace std;

int preIncrement(int number){
    cout << "Result of Pre Increment = " << ++number << endl;
}
int postIncrement(int number){
    cout << "Result of Post Increment = " << number++ << endl;
}

int main(){

    int number;

    cout << "Enter Number\n";
    cin >> number;

    preIncrement(number);
    postIncrement(number);

    return 0;
}
