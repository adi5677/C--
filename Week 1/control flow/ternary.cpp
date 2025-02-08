#include<iostream>
using namespace std;
int main() {


    // int age = 25;
    // (age > 18) ? cout << "you can vote" : cout << "you can not vote";

    int x = 100;
    int y = 20;
    int result = (x > y) ? x : y;

    cout << "The larger value is: " << result << endl;
    return 0;
}