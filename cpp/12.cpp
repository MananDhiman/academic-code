#include <iostream>
using namespace std;

class A{
public:
    virtual void show(){
        cout << "Base class show function called\n";
    }
    virtual void print(){
        cout << "Base class print function called\n";
    }

};
class B:public A{
    void show(){
        cout << "Derived class show function called\n";
    }
    void print(){
        cout << "Derived class print function called\n";
    }
};

int main(){
    
    A *baseptr;
    B derivedObj;

    baseptr = &derivedObj;

    baseptr -> print();
    baseptr -> show();
    
    return 0;
}
