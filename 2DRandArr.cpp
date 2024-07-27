/*Writing a program that creates two one-dimensional arrays of size 5 and fills them 
with random values between 100 and 199. The program then uses a function to 
merge the two arrays to create a new one. Merging takes one element from each 
array in sequence. The program prints the contents of all arrays.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        // Generating random values from 100 - 199
        arr[i] = rand() % 100 + 100;
    }
}
void mergeArrays(int arr1[], int arr2[], int mergedArr[], int size){
    for (int i = 0; i < size; i++){
        mergedArr[2 * i] = arr1[i];
        mergedArr[2 * i + 1] = arr2[i];
    }
}
void printArray(const char* name, int arr[], int size){
    cout << name << ": ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    const int SIZE = 5;
    int arr1[SIZE], arr2[SIZE];
    int mergedArr[2 * SIZE];
    // Seeding the random number generator
    srand(time(0));
    fillArray(arr1, SIZE);
    fillArray(arr2, SIZE);
    mergeArrays(arr1, arr2, mergedArr, SIZE);
    printArray("Array 1", arr1, SIZE);
    printArray("Array 2", arr2, SIZE);
    printArray("Merged Array", mergedArr, 2 * SIZE);
    return 0;
}