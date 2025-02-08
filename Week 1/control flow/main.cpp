#include<iostream>
using namespace std;

int main() {

    // int budget;
    // cout<<"Enter our budget :" ;

    // //input
    // cin >> budget;

    // //if statement
    // if(budget > 2000000) {
    //     cout << " you can buy scorpio" << endl;
    // }

    // //else statement
    // else {
    //     cout << " you can not buy scorpio" << endl;
    // }

    // int age = 100;
    // if(age > 18) {
    //     cout << " you can vote "  << endl;
    // }

    // else {
    //     cout << " you can not vote " << endl;
    // }


    //if-else if block

    // int marks;
    // cout << " Enter your marks: " << endl;
    // cin >> marks;


    // // use if-else if block 
    // if(marks > 90) {
    //     cout << " you got A+ grade" << endl;
    // }

    // else if (marks > 80) {
    //     cout << " you got A grade" << endl;
    // }

    // else if (marks > 70) {
    //     cout << " you got B grade" << endl;
    //  }

    //  else if (marks > 60) {
    //     cout << " you got C grade" << endl;
    //  }
     
    //  else if (marks > 50) {
    //     cout << " you got D grade" << endl;
    //  }


    // if-else if-else statement

    
    // int marks;
    // cout << " Enter your marks: " << endl;
    // cin >> marks;


    // // use if-else if block

//    int marks;
//     cout << " Enter your marks: " << endl;
//     cin >> marks; 

//     if(marks > 90) {
//         cout << " you got A+ grade" << endl;
//     }

//     else if (marks > 80) {
//         cout << " you got A grade" << endl;
//     }

//     else if (marks > 70) {
//         cout << " you got B grade" << endl;
//      }

//      else if (marks > 60) {
//         cout << " you got C grade" << endl;
//      }
     
//      else if (marks > 35) {
//         cout << " you got D grade" << endl;
//      }

//      else{
//         cout << " you failed" << endl;
//      }



    // Nested if statement

    int height;
    cout << " Enter you height:" << endl;
    cin >> height;

    int weight;
    cout << "Enter your weight:" << endl;
    cin >> weight;

    if(height > 5) {

        if(weight > 55) {
            cout <<"you are healthy" << endl;
        }

        else {
            cout << "you are not healthy" << endl;
        }
    }

    else {
        cout << " you are not healthy" << endl;
    }


    return 0;
}