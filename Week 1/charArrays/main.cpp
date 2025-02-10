#include<iostream>
#include<cstring>

using namespace std;

//Find length 
int getLength(const char arr[]) {
    int count = 0;
    int index = 0;

    while(arr[index] != '\0') {
        count++;
        index++;
    }
    return count;
}

void concateArray(char a[], const char b[]) {
    int aIndex = getLength(a);
    int bIndex = 0;
    while (b[bIndex] != '\0') {
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }
    a[aIndex] = '\0';
}


void copyArray(char actualArray[], char copyArray[]) {
    int aIndex = 0;
    int bIndex = 0;

    while (actualArray[aIndex] != '\0') {
        //start copying
        copyArray[bIndex] = actualArray[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArray[bIndex] = '\0';  //Terminate
}


bool compareArray(char a[], char b[]) {
    int aIndex = 0;
    int bIndex = 0;

    while(a[aIndex] != '\0' && b[bIndex] != '\0') {
        if(a[aIndex] != b[bIndex]) {
            return false;
        }
        aIndex++;
        bIndex++;
    }

    // Check if both arrays ended
    return a[aIndex] == '\0' && b[bIndex] == '\0';
}


int main() {

    //Using library function
    // char actual[] = "Aditya";
    // char ans[100];

    // strcpy(ans, actual);
    // cout << ans << endl;

    // char actual[] = "Aditya";
    // char copyArray[100];




    // char arr[] = "Aditya";
    // char arr2[] = "Aditya";
    
    // cout <<compareArray(arr, arr2) << endl; 

    // char actual[100] = "Aditya";
    // char ans[100];

    // copyArray(actual, ans);
    // cout << "Printing ans Array: " << ans << endl;

    // char a[10] = "Aditya";
    // char b[10] = "Alka";
    // concateArray(a, b);
    // cout<< "Printing a: " << a << endl;

    // char arr[] = "Aditya";
    // char brr[] = "Sharma";
    // cout << getLength(arr) << endl;
    // cout << getLength(brr) << endl;




    //Declare
    // char arr[10];


    // cout << arr[2] << " ";

    // char arr[10] = "Aditya";
    // cout << arr[0] << endl;
    // cout << arr[7] << endl;

    // cout << "Printing 7th index: " << arr[7] << endl;
    // int asciiValue = arr[6];
    // cout << asciiValue << endl;



    //Null Character
    //How to self insert null character
    // char arr[2];
    // char arr[0] = 'a';
    // char arr[1] = '\0';

    //Change cout behaviour

    // int arr [4] = {1,2,3,4};
    // cout << arr << endl;
    
    // char brr[7] = "Aditya";
    // cout << brr << endl;
    // for(int i = 0; i <= 7; i++) {
    //     cout << brr[i] << " ";
    // }

    return 0;
}