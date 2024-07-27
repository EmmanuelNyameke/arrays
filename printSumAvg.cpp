// finding and printing the sum, the average, the smallest, and the largest of the numbers and displays them on the monitor
/***************************************************************
* Use of an array to read a list of integers from a file and *
* prints the sum, the average, the smallest, and largest of *
* the numbers in the file. *
***************************************************************/

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // File declaration
    ifstream inputFile;
    // Array and Variable Declaration
    const int CAPACITY = 50;
    int numbers[CAPACITY];
    int size = 0;
    // Initialization
    int sum = 0;
    double average;
    int smallest = 1000000;
    int largest= -1000000;
    // Openning input file with openning validation
    inputFile.open("inFile.txt");
    if(!inputFile){
        cout << "Error. Input file can not be opened." << endl;
        cout << "The program is terminated." << endl;
        return 0;
    }
    // Reading(copying) numbers from the file
    while(inputFile >> numbers[size]) {
        size++;
    }
    // Closing input file
    inputFile.close();
    // Finding the sum, average, largest and smallest
    for(int i = 0; i < size; i++){
        sum += numbers[i];
        if(numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if(numbers[i] > largest){
            largest = numbers[i];
        }
    }
    average = static_cast <double> (sum) / size;
    // Printing result
    cout << "There are " << size << " numbers in the list" << endl;
    cout << "The sum of them is " << sum << endl;
    cout << "The average of them is " << average << endl;
    cout << "The smallest number is " << smallest << endl;
    cout << "The largest number is " << largest << endl;
    return 0;
}