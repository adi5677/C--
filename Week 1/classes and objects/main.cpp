#include<iostream>
using namespace std;

class student {
    public: 

        //properties / data member
        int age;
        int weight;
        int height;


        //constructor
        student() {
            cout << "Object initialisation" << endl;
            age = 0;
            weight = 0;
            height = 0;
        }

        //Parameterised constructor
        student(int myAge, int w, int h) {
            cout << "Parameterised constructor" << endl;
            age = myAge;
            weight = w;
            height = h;
        }

        //destructor
        ~student() {
            cout << "Object is destroyed" << endl;
            }



        //behaviours / member function
        void running() {
            cout << "I am Running" << endl;
        }

        void studying() {
            cout << "I am Studying" << endl; 
        }
        
};

int main() {

    // cout << sizeof(student) << endl; // Outputs: 1

    //Object creation


    //Static way //1st way.
    // student s1;
    // s1.age = 20;
    // s1.weight = 60;
    // s1.height = 170;
    // s1.running();
    // s1.studying();

    //Dynamic way //2nd way.
    // student* s2 = new student(); //
    // s->name = "Aditya";
    // s2->age = 20; 
    // s2->weight = 60;
    // s2->height = 170;
    // s2->running();
    // s2->studying();




    // student a; //Object creation
    // student* b = new student; //Object creation using pointer
    // student* c = new student(); //Object creation using constructor
    // student* d = new student(); //Object creation using constructor

    // student x;
    // student y(10,40,90);

    //destructor
    // student* z = new student();
    // delete z;

    student *s = new student();
    delete s;


    return 0;
}