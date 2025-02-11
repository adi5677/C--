#include<iostream>
using namespace std;

int main() {
    int a = 5;

    //Ref Var
    // int &temp = a;

    // cout << temp << " ";
    // temp--;
    // cout << temp << " ";
    // temp = temp * 10;
    // cout << temp << " ";
    // a++;
    // cout << a << " ";

    int &temp = a;
    temp++;
    temp = temp * 10;
    temp--;
    a++;
    cout << a << " ";
    a = a - 5;
    cout << a << " ";
    



    return 0;
}