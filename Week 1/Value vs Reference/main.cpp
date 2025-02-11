#include<iostream>
#include <string>
using namespace std;

//For Int
// void solve(int a) {
//     cout << "Inside function " << a << endl;
//     a++;
//     cout << "Inside function " << a << endl;
// }


//For Char
// void solve(char a) {
//     cout << "Inside function " << a << endl;
//     a++;
//     cout << "Inside function " << a << endl;
// }


//For String
// void solve(std::string str) {
//     cout << "Inside function " << str << endl;
//     str[0] = 'b';
//     cout << "Inside function " << str << endl;
// }



//Pass BY Reference 
// void solve(int &a) {
//     cout << "Inside function " << a << endl;
//     a++;
//     cout << "Inside function " << a << endl;
// }


//Ref in int
// void solve(int &arr) {
//     cout << arr << " ";
//     arr++;
//     cout << arr << " ";
// }

//Ref in char
// void solve(char &ch) {
//     cout << ch << " ";
//     ch++;
//     cout << ch << " ";
// }

int countEvenNum(int arr[], int size, int &count) {
    //{ int arr[] } Array always pass by reference.
    for(int i = 0; i <= size; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {

    //For int
    // int a = 5;
    // cout << "Inside main " << a << endl;
    // solve(a);
    // cout << "Inside main " << a << endl;


    //For Char
    // char a = 'k' ;
    // cout << "Inside main " << a << endl;
    // solve(a);
    // cout << "Inside main " << a << endl;

    

    //For String
    // string str = "Aditya";
    // cout << "Inside main " << str << endl;
    // solve(str);
    // cout << "Inside main " << str << endl;

    // int a = 50;
    // cout << "Inside main " << a << endl;
    // solve(a);
    // cout << "Inside main " << a << endl;


    //Ref in integer
    // int a = 50;
    // cout << a << " ";
    // solve(a);
    // cout << a << " ";


    //Ref in char
    // char a = 'A';
    // cout << a << " ";
    // solve(a);
    // cout << a << " ";


    int arr[] = {1,4,5,2,3,6,8,7,9};
    int size = 9;
    int count = 0;
    countEvenNum(arr, size, count);
    cout <<"Even Number count: " << count << endl;




    





    return 0;
}