#include<iostream>
using namespace std;

//Pass array in Function.
void printArray(int arr[], int size) {
    //printing
    for(int index = 0; index <= size - 1; index++) {
        cout << arr[index] << " ";
    }
}


void storeMultipleOf10(int num[], int size) {
    int count = 1;
    for(int index = 0; index <= size - 1; index++) {
        num[index] = 10 * count;
        count++;
    }
}

// void flipZeroOne(int arr, int size) {
//     for(int index = 0; index < size; index++) {
//         if(arr[index] == 1) {
//             arr[index] = 0;
//         }
//         else {
//             arr[index] = 1;
//         }
//     }
// }

//Array
int main() {


    //Array intilise through function
    // int arr[] = {10, 20, 30, 40, 50};
    // int size = sizeof(arr) / sizeof(arr[0]); //size of array
    // int size = 5;
    // printArray(arr, size);

    //Array intilise with 0
    // int arr[5] = {0};
    // int size = 5;
    // printArray(arr, size);

    int arr[10];
    int size = 10;
    storeMultipleOf10(arr, size);

    printArray(arr, size);


    //Flip Array 
    // int arr[] = {1, 2, 3, 4, 5};
    // int size = 5;
    // cout << "before :" ;
    // printArray(arr, size);

    // flipZeroOne(arr, size);

    // cout << "\n\nAfter :" ;
    // printArray(arr, size);

    //Declaration 
    // int arr[100];
    // int brr[10];

    //intialisation
    // int drr[10] = {5, 10, 15};
    // int crr[] = {12, 18, 24, 30, 36};


    //create array multiple of 2
    // int multipleOf2[10] = {2,4,6,8,10,12,14,16,18,20};
    // cout << multipleOf2[1] << endl;


    //Traverse
    // for(int i = 0; i <= 9; i++) {
    //     cout << multipleOf2[i] << " ";
    // }

    //Input in array
    // int arr[5];
    // for(int index = 0; index <= 4; index++) {
    //     cout << "Enter the value of arr["<<index<<"]: ";
    //     cin >> arr[index] ;
    //     cout << endl;
    // }

    // //print
    // for(int index = 0; index <= 4; index++) {
    //     cout << "Value of arr["<<index<<"] = "<< arr[index] << endl;
    // }


    //Question :- Print Total sum
    // int arr[] = {10,30,40,60,80};
    // int sum = 0;
    // for(int index = 0; index <= 4; index++) {
    //     sum = sum + arr[index];
    // }
    // cout <<"Total sum " << sum << endl;


    return 0;

}