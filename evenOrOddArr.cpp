/*
Writing a program that creates an array of 20 integers in which each element 
is between 1 and 100. The program then creates two arrays: one holding odd 
values and the other holding even values.
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // Initializing random seed generator
    srand(static_cast<unsigned int> (time(0)));
    // Creating an array 20 integers
    const int size = 20;
    int arr[size];
    // Filling the array with random integers between 1 and 100
    for (int i = 0; i < size; ++i){
        arr[i] = rand() % 100 + 1;
    }
    // Creating vectors to hold odd and even values
    vector<int> oddValues;
    vector<int> evenValues;
    // Separating the values into odd and even arrays
    for (int i = 0; i < size; ++i){
        if (arr[i] % 2 == 0){
            evenValues.push_back(arr[i]);
        }
        else {
            oddValues.push_back(arr[i]);
        }
    }
    // Printing the original array
    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Printing the odd values
    cout << "Odd Values: ";
    for (size_t i = 0; i < oddValues.size(); ++i){
        cout << oddValues[i] << " ";
    }
    cout << endl;
    // Printing the even values
    cout << "Even Values: ";
    for(size_t i = 0; i < evenValues.size(); ++i){
        cout << evenValues[i] << " ";
    }
    cout << endl;
    return 0;
}