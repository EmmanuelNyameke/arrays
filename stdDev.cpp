/*
Writing a program that creates a list of 10 random integers between 1 and 100 
and then prints the elements of the array, the average of the elements, and the 
standard deviation of them using the formula shown below, in which n defines 
the size of the list and aver defines the average value:
stdDev = sqrt ( (num[0] - aver)2 + … + (num [n-1] - aver)2 ) / n
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // Initializing the random seed
    srand(time(0));
    // Creating a list of 10 random integers between 1 and 100
    vector<int> numbers;
    for(int i = 0; i < 10; ++i){
        numbers.push_back(rand() % 100 + 1);
    }
    // Printing the elements of the array
    cout << "Elements of the array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Calculating the average of the elements
    double sum = 0;
    for(int num : numbers) {
        sum += num;
    }
    double average = sum / numbers.size();

    // Calculating the standard deviation
    double sumOfSquares = 0;
    for(int num : numbers){
        sumOfSquares += pow(num - average, 2);
    }
    double stdDev = sqrt(sumOfSquares / numbers.size());
    // Printing the average and the standard deviation
    cout << "Average: " << average << endl;
    cout << "Standard Deviation: " << stdDev << endl;
}
