/***************************************************************
* Use of an array to get the number of days in each month *
***************************************************************/
#include <iostream>
using namespace std;
int main(){
    // Declarations
    int numberOfDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    // Getting input and validate
    do {
        cout << "Enter the month number (1-12): ";
        cin >> month;
    } while(month < 1 || month > 12);
    // Output
    cout << "There are " << numberOfDays[month] << " days in this month" << endl;
    return 0;
}