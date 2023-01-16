#include <iostream>
using namespace std;

int main() {
    int total_num = 5, i = 0, element, sum = 0; 
    float average;

    cout << "Enter 5 integer numbers and press enter." << endl;

    for (i; i < total_num; i++ ) {
        cin >> element;
        sum += element;
    }

    average = sum/total_num;

    cout << "The average value is: " << average << endl;
}