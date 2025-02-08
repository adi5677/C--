#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter your num:";
    cin >> num;

    int range = 10;
    cout << "Table of " << num << " is:" << endl;
    for(int i=1; i<=range; i++)
    {
        cout << num << " * " << i << " = " << num*i << endl;
    }
    return 0;

}