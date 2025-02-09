#include <iostream>
using namespace std;

//Print counting numbers from 1 to n using function
void printNumbers(int limit) {
    for (int i = 1; i <= limit; ++i) {
        cout << i << " ";
    }
}

int main() {
    printNumbers(100);
    return 0;
}