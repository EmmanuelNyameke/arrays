/*Writing a program that randomly creates a two-dimensional array of size 6 by 
6; the array contains integers from 100 to 199. The program then creates two 
functions. The first creates an array that contains the diagonal elements from 
left to right, and the second creates the diagonal elements from right to left. The 
program prints the two-dimensional array and both one-dimensional arrays*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to print 2D array
void print2DArray(int arr[6][6]){
    for (int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to get the left-to-right diagonal elements
void getLeftToRightDiagonal(int arr[6][6], int diag[6]){
    for (int i = 0; i < 6; i++){
        diag[i] = arr[i][i];
    }
}

// Function to get the right-to-left diagonal element
void getRightToLeftDiagonal(int arr[6][6], int diag[6]){
    for(int i = 0; i < 6; i++){
       diag[i] = arr[i][5-1];
    }
    cout << endl;
}

// Function to print a 1D array
void print1DArray(int arr[6]){
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function to run the program
int main(){
    srand(time(0));

    int arr[6][6];
    int leftToRightDiagonal[6];
    int rightToLeftDiagonal[6];

    // Filling the 2D array with random integers between 100 and 199
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            arr[i][j] = rand() % 100 + 100;
        }
    }
    // Extracting the diagonal elements
    getLeftToRightDiagonal(arr, leftToRightDiagonal);
    getRightToLeftDiagonal(arr, rightToLeftDiagonal);
    // Printing the 2D array
    cout << "2D Array:" << endl;
    print2DArray(arr);
    // Printing the diagonal arrays
    cout << "Left-to-Right Diagonal:" << endl;
    print1DArray(leftToRightDiagonal);
    cout << "Right-to-Left Diagonal:" << endl;
    print1DArray(rightToLeftDiagonal);
    return 0;
}