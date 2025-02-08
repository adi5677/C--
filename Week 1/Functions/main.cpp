#include<iostream>
using namespace std;


//Functions.
// void printCounting() {
//     for(int i = 0; i <= 10; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
// }

// This is return type function.
int sum(int a, int b) {
    return a + b;
}


//Void is used when we don't want to return anything.
void myName() {
    cout << " MY Name is Aditya Sharma" << endl;
}





int main() {

    myName();

    // this can give buggy code not redable so then we use functions.
    // cout << "Hi" << endl;

    // for(int i = 0; i <= 10; i++) {
    //     cout << i << " ";
    // } cout << endl;


    // for counting from 0 to 10 we can use functions.
    // printCounting();

    // cout << "Bye" << endl;

    // int a ;
    // cin >> a;
    // cout << a << endl;

    // printCounting();



    //Return sum.
    int ans = sum(10, 50);
    cout << ans << endl;


    return 0;
}