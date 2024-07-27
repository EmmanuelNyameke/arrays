/*Writing a program that creates a list of 10 random integers between 1 and 100 and 
then prints the elements of array, the smallest element, and the largest element*/
#include <iostream>
#include <vector>
#include <algorithm> // For max and min element
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
using namespace std;

int main(){
    // Using current time as seed for random generators
    srand(time(0));
    vector<int> randomNumbers;
    // Generating 10 random numbers between 1 and 100
    for(int i = 0; i < 10; ++i){
        randomNumbers.push_back(rand() % 100 + 1);
    }
    // Printing the elements of the array
    cout << "Random Numbers: ";
    for (int number : randomNumbers){
        cout << number << " ";
    }
    cout << endl;

    // Find and print the smallest and largest elements
    int minElement = *min_element(randomNumbers.begin(), randomNumbers.end()); 
    int maxElement = *max_element(randomNumbers.begin(), randomNumbers.end());
    cout << "Smallest elements: " << minElement << endl;
    cout << "Largest elements: " << maxElement << endl;
    return 0;
}