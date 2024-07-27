/*Writing a program that creates an array of 10 integers filled randomly with values 
from 1 to 100. The program then removes the largest and the smallest elements 
from the array and prints the original array and the array after the two elements 
have been removed.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    vector<int> array(10);
    // Seeding for random number generation
    srand(static_cast<unsigned int> (time(0)));
    // Filling the array with random integers from 1 - 100
    for(int i = 0; i < 10; ++i){
        array[i] = rand() % 100 + 1;
    }
    // Printing the original array
    cout << "Original Array: ";
    for(int i = 0; i < 10; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
    // Finding the largest and smallest elements
    auto minElement = min_element(array.begin(), array.end());
    auto maxElement = max_element(array.begin(), array.end());
    // Removing the smallest element
    array.erase(minElement);
    // Recalculating the position of the max element after the smallest element has been removed
    maxElement = max_element(array.begin(), array.end());
    // Removing the largest element
    array.erase(maxElement);
    // Printing the modified array
    cout << "Modified Array: ";
    for(size_t i = 0; i < array.size(); ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}