#include <iostream>
using namespace std;

class Publication{
public:
    string title;
    float price;
};

class Book : public Publication{
public:
    int pages;

    void get_data(){
        cout << "Enter Name of Publication: \n";
        cin >> title;
        cout << "Enter Price: \n";
        cin >> price;
        cout << "Enter No. of Pages in Book:\n";
        cin >> pages;
    }

    void put_data(){
        cout << "The Name of Publication is: " << title << ", and the Price is: " << price << endl;
        cout << "The Book has " << pages << " pages\n";
    }
};
class Tape : public Publication{
public:
    float duration;

    void  get_data(){
        cout << "Enter Duration of Tape in Minutes:\n";
        cin >> duration;
    }
    void put_data(){
        cout << "The Tape is " << duration << " minutes long";
    }
};

int main(){

    Book book;
    book.get_data();

    Tape tape;
    tape.get_data();

    cout << "Now Displaying Data...\n";
    book.put_data();
    tape.put_data();

    return 0;
}
