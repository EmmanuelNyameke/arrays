/*Writing a program that creates a list of 10 random integers between 1 and 100 and 
a function to round shift the elements one element toward the end of the array 
such that the first element becomes the second, the second element becomes the 
third, …, and the last element becomes the first. The program prints the original 
array and the shifted array.*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
// Function to generate a vector of random numbers
vector<int> generateRandomIntegers(int size, int min, int max){
    vector<int> vec(size);
    for(int i = 0; i < size; ++i){
        vec[i] = rand() % (max - min + 1) + min;
    }
    return vec;
}

// Function to round shift elements of the vector
void roundShift(vector<int>& vec) {
    if(vec.empty()) return;
    int lastElement = vec.back();
    for (int i = vec.size() - 1; i > 0; --i){
        vec[i] = vec[i - 1];
    }
    vec[0] = lastElement; 
}

// Function to print the vector
void printVector(const vector<int>& vec){
    for(int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    // Initializing the seed random generator
    srand(time(0));
    // Generating a vector of 10 random integers between 1 and 100
    vector<int> numbers = generateRandomIntegers(10, 1, 100);
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(rand() % 100 + 1);
    }
    // Printing the original vector
    cout << "Original Array: ";
    printVector(numbers);
    // Round shift the vector
    roundShift(numbers);
    // Print the shifted vector
    cout << "Shifted Vector: ";
    printVector(numbers);
    return 0;
}