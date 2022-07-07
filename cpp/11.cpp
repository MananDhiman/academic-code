#include <iostream>
using namespace std;

int main(){

    int number_1, number_2;
    string string_1, string_2;

    cout << "Enter Two Numbers:\n";
    cin >> number_1 >> number_2;

    cout << "Enter Two Words:\n";
    cin >> string_1 >> string_2;

    cout << "Use of + operator between Integers = " << number_1+number_2 << endl;
    cout << "Use of + operator between Strings = " << string_1+string_2 << endl;

    return 0;
}
