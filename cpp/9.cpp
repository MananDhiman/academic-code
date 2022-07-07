#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int roll_no;

};
class Exam: public Student{
public:
    float marks_subject[5];

};
class Result: public Exam{
public:

    float total =0, average;
    void get_data(){
        cout << "Enter Student Name and Roll No:\n";
        cin >> name >> roll_no;

        cout << "Enter Marks of Student in Five Subjects:\n";
        for(int i=0; i<5; i++){
            cin >> marks_subject[i];
            total += marks_subject[i];
        }

        average = total / 5;
    }

    void show(){
        cout << name << ", Roll No: " << roll_no << ", Scored total of " << total << " marks with average of " << average;
    }
};
int main(){

    Result result;
    result.get_data();
    result.show();

    return 0;
}
