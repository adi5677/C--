#include<iostream>
using namespace std;

//Function to calculate simple intreset
float calculateSi(float P, float R, float T) {
    return (P * R * T) / 100;
}

int main() {
    float P = 1000;
    float T = 5;
    for(int R = 1; R <= 10; R++) {
        float si = calculateSi(P, R, T);
        cout << "Simple Intreset R = " << R << " % is " << si << endl;
    }
    return 0;
}