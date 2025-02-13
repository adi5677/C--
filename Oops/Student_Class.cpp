#include<iostream>
#include <string>
using namespace std;

class Student {
    public:

    //Attributes
    int id;
    int age;
    string name;
    int nos;

    
    //Ctor: Default Constructor 

    Student() {
        cout << "Default Constructor Called" << endl;
    }

    // Parameterised Constructor
    Student(int id, int age, string name, int nos) {
        cout << "Parameterized Constructor Called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    //Copy Ctor
    Student(const Student& srcobj) {
        cout << "Student Copy Constructor Called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }


    //Behaviour /Methods /Function
    void study() {
        cout << this->name << "Student is Studying" << endl; //
    }

    void sleep() {
        cout << this->name << "Student is Sleeping" << endl;
    }

    void bunk() {
        cout << this->name << "Student is Bunking" << endl;
    }


    //Dtor
    ~Student() {

        cout << this->name << "Default Dtor Called" << endl; //Destructor
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;

    }

    
};

int main() {

    Student A(1, 15, "Alka", 95);
    Student B(2, 12, "Aditya", 28);
    B.bunk();
    Student C(3, 11, "Golu", 10);
    Student D(4, 10, "Yagnik", 18);


    // cout << A.name << " " << A.age << endl;

    //copy ctor
    Student C = (A);


    return 0;
}
