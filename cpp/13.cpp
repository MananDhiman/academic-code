#include <iostream>
using namespace std;

class FirstClass{
public:
        virtual void show() = 0;
};
class SecondClass:public FirstClass{
public:
    void show(){
        cout << "This is a Program to show Abstract Class";
    }
};

int main(){

    SecondClass sc;
    sc.show();

    return 0;
}
