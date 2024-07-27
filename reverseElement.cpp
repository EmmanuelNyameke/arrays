/* Writing a program that creates an array of 10 integers filled randomly with values 
from 1 to 100; then creates another array in which the order of elements is 
reversed; and then prints the contents of both arrays.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    const int SIZE = 10;
    int array[SIZE];
    int reversedArray[SIZE];
    // Seeding the random number generator
    srand(time(0));
    // Filling the array with random values from 1 - 100
    for (int i = 0; i < SIZE; ++i){
        array[i] = rand() % 100 + 1;
    }
    // Creating the reversed array
    for (int i = 0; i < SIZE; ++i){
        reversedArray[i] = array[SIZE - 1 - i];
    }
    // Printing the original array
    cout << "Original Array: ";
    for (int i = 0; i < SIZE; ++i){
        cout << array[i] << " ";
    }
    cout <<  endl;

    // Printing the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < SIZE; ++i){
        cout << reversedArray[i] << " ";
    }
    cout << endl;
    return 0;
}