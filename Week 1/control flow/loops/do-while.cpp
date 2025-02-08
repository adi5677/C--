#include<iostream>
using namespace std;

int main() {
    //For Loop;
    // for(int i=0; i<=5; i++) {
    //     cout << i << endl;
    // }


    //Do-While Loop;
    // int i=1;
    // do{
    //     //logic
    //     cout << i << " ";
    //     //updation
    //     i=i+1;
    // } while(i<=5);
    // cout << endl;

    //Nested Loop;
    for(int i=1; i<=5; i=i+1) {
        for(int j=1; j<=5; j=j+1) {
            cout << i << " " << j << endl;
        }
    }


    return 0;
}