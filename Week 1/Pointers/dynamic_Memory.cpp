#include<iostream>
using namespace std;

int main() {

    //dynamic memory
    // int *ptr = new int; //allocate memory for an integer
    // *ptr = 10; //assign value to the memory location
    // cout << *ptr ;

    //Now, I have no need to delete the memory because it is not dynamically allocated
    //However, if I had dynamically allocated memory, I would need to delete it to avoid memory
    // delete ptr; //delete the memory

    //Allocate memory for an array of 5 integers
    int *ptr2 = new int[5];
    //Assign values to the array
    ptr2[0] = 10;
    ptr2[1] = 20;
    ptr2[2] = 30;
    *(ptr2 + 3) = 40;
    *(ptr2 + 4) = 50;

    for(int i = 0; i <= 4; i++) {
        cout << ptr2[i] << " ";
    }


    //dellocation of memory
    delete[] ptr2; //delete the memory
    cout << ptr2 << endl; //this will print garbage value because the memory is deleted



    return 0;
}