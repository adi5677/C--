#include<iostream>
using namespace std;

int main() {

    char grade;
    cout << "Enter your gradee: " << endl;
    cin >> grade;

    // if(grade == 'A') {
    //     cout << " your marks are between 90-100" << endl;
    //     }
    // else if(grade == 'B') {
    //     cout << "Your marks are between 80-90" << endl;
    // }
    // else if(grade == 'C') {
    //     cout << " Your marks are between 70-80" << endl;
    // }
    // else if(grade == 'D') {
    //     cout << " Your marks are between 60-70" << endl;
    // }
    // else if(grade == 'E') {
    //     cout << "Your grade are between 50-60" << endl;
    // }
    // else {
    //     cout << " Your grade are between 0-50" << endl;
    // }

    switch(grade) {
        case 'A' :
        cout << "your marks are between 90-100" << endl;
        break;

        case 'B' :
        cout << "your marks are between 80-90" << endl;
        break;

        case 'C' :
        cout << " your marks are between 70-80" << endl;
        break;
        
        case 'D' :
        cout << "your marks between 60-70" << endl;

        //break is default case is mendatory;
        break;


        //default case is not mendatory it's optional;
        default:
        cout << " your marks are between 0-50" << endl;
        }

    return 0;
}