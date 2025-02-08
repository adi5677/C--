#include<iostream>
using namespace std;

    //Functions for Multiplication.
    int getMultipliction(int a, int b, int c) {
        int result = a * b * c;
        return result;
    }

    //Functions for Print Name.
    void printNmae() {
        for(int i = 0; i <= 10; i++) {
            cout << "Aditya" << " "; 
        }
    }

    //Function for Table.
    void printTable(int num) {
        for(int i = 1; i <= 10; i++) {
            cout << num * i << " ";
        }
    }

    //Function for convert forehnhit to celcius.

    float ferToCel(float far) {
        int cel = (far - 32)*5/9;
        return cel;
    }

    //Function for convert UpperCase.
    char toUpper(char ch) {
        char ans = ch - 32;
        //char ans = ch - 'a' + 'A';
        return ans;
    }


int main() {

    //Multiplication.
    // int result = getMultipliction(10, 20, 30);
    // cout << result << endl;

    //Print Name.
    // printNmae();
    // cout << endl;

    //Table.
    // printTable(5);
    // cout << endl;

    // Fer to Cel.
    float cel = ferToCel(32);
    cout << "Temperature in Celcius is " << cel << endl;

    //Upper Case.
    // char ch = toUpper('a');
    // cout << ch << endl;

    return 0;


}
