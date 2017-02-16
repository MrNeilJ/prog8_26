// This program stores employee hours worked and hourly pay rates
// in two vectors.  It demonstrates the use of the push_back member
// function to add new elements to the vectors
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<int> hours;        // hours is an empty integer vector
    vector<double> payRate;   // payRate is an empty double vector
    double grossPay;
    int numEmployees;         // Number of employees
    int index;                 // Loop counter

    // Get the number of employees
    cout << "How many employees do you have? ";
    cin >> numEmployees;

    // Input the payroll data
    cout << "Enter the hours worked and hourly pay rates of the "
         << numEmployees << " employees. \n";

    for (index = 0; index < numEmployees; index++)
    {
        int tempHours;          // Number of hours entered
        double tempRate;

        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> tempHours;
        hours.push_back(tempRate);
    }

    // Display each employee's gross pay
    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << setw(7) << grossPay << endl;
    }
    return 0;

}