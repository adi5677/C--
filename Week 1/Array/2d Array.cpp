#include<iostream>
using namespace std;

//Function
void print2DArray(int arr[][4], int rowSize, int colSize) {
    cout << "Printing the 2D array: " << endl;
    //Printing
    for(int row_index=0; row_index<rowSize; row_index++) {
        for(int col_index=0; col_index<colSize; col_index++) {
            cout << arr[row_index][col_index] << " ";
            }
            cout << endl;
            }
}

int main() {
    
    //declre
    // int arr[5][4];

    //Intialisation
    // int arr[2][4] = {
    //                 {1,2,3,4},
    //                 {5,6,7,8}
    //                 };

    //     cout << arr[0][3] << endl;

    int arr[3][4] ;
    int row = 3;
    int col = 4;
    for(int row_index=0; row_index<row;row_index++){
        for(int col_index=0; col_index<col;col_index++){
            cout <<"Enter the input for arr [" << row_index << " ][" << col_index << "] : ";
           
            cin >> arr[row_index][col_index];
        }
        cout << endl;
    }

    //Printing
    // for(int row_index=0; row_index<row;row_index++){
    //     for(int col_index=0; col_index<col;col_index++){
    //         cout << arr[row_index][col_index] << " ";
    //         }
    //         cout << endl;
    //     }


    print2DArray(arr, row, col);
}