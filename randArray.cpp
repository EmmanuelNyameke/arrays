/* Writing a program that randomly creates an array of 100 elements and fills the 
elements with random integers between 100 and 200. The program prints the 
elements in 10 rows by calling a print function.
*/
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time
using namespace std;

// Function to fill the array with random integers between 100 and 200
void fillArray(int arr[], int size){
    for (int i = 0; i < size; ++i){
        // Random numbers between 100 and 200
        arr[i] = 100 + rand() % 101;
    }
}

// Function to print the array in 10 rows
void printArray(int arr[], int size){
    for(int i = 0; i < size; ++i){
        cout << arr[i] << "\t";
        if((i + 1) % 10 == 0){
            cout << endl;
        }
    }
}

// Main function
int main(){
    const int SIZE = 100;
    int arr[SIZE];
    // Seeding the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));
    // Filling the array with random integers by calling the functions
    fillArray(arr, SIZE);
    printArray(arr, SIZE);
    return 0;
}