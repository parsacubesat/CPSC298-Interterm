#include <iostream>

using namespace std;

int main()
{
    // Declare variables needed for amount worked, taxes, and total net pay
    float numHoursWorked = 0;
    float socialSecurity = 0;
    float federalTax = 0;
    float stateTax = 0;
    float netAmount = 0;
    float grossPay = 0;

    //constant for money earned per hour
    const int payRate = 16;

    // Loop to check if input is correct
    while (true)
    {
        // Asks for number of hours worked
        cout << "Enter the number of hours worked: " << endl;
        cin >> numHoursWorked;

        //Checks to see if amount worked is normal or needs over pay
        if (numHoursWorked > 40)
        {
            //add the usual 40 hour worked then subtract the 40 hours.
            grossPay += (payRate * 40);
            numHoursWorked -= 40;
            //The remainder is at 1.5 times pay
            grossPay += ((payRate * 1.5) * numHoursWorked);
            break;
        }
        else if (numHoursWorked > 0)
        {
            //If amount worked is normal for a week
            grossPay += (payRate * numHoursWorked);
            break;
        }
        else
        {
            //if number negative or other error
            cout << "Error. Please enter a valid number." << endl;
            continue;
        }
    }

    // Calculate taxes
    socialSecurity = grossPay * 0.06;
    federalTax = grossPay * 0.14;
    stateTax = grossPay * 0.05;

    // Output results
    cout << "Your total gross pay is: " << grossPay << endl;
    cout << "Social Security amount withheld: " << socialSecurity << endl;
    cout << "Federal Tax amount withheld: " << federalTax << endl;
    cout << "State Tax amount withheld: " << stateTax << endl;
    cout << "Total net amount: " << (grossPay - socialSecurity - federalTax - stateTax - 10) << endl;
}