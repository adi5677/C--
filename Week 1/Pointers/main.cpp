#include<iostream>
using namespace std;



// void solve(int arr[], int size) {
//     cout << sizeof(arr);
// }

int main() {

    // int num = 50;
    // cout << "Printing Address of num: " << &num << endl;
    // int *ptr = &num;

    // cout << num << endl;
    // cout << &num << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // (*ptr)++;
    // cout << num << endl;
    // cout << &ptr << endl;



    //Bad Practice
    // int *ptr = NULL;
    // cout << *ptr << endl;

    // int arr[4] = {1,2,3,4};
    // cout << sizeof(arr);
    // solve(arr, 4);


    //Multiple Pointers case.
    int a = 5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr;

    cout << a << endl;
    cout << &a << endl;
    // cout << *a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << ctr << endl;
    cout << &ctr << endl;
    cout << *ctr << endl;
    cout << **ctr << endl;
    cout << dtr << endl;
    cout << &dtr << endl;
    cout << *dtr << endl;
    cout << **dtr << endl;
    cout << ***dtr << endl;


    return 0;
}