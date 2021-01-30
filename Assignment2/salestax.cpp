#include <iostream>

using namespace std;

// funciton takes in tax and cost
float addTax(float taxRate, float cost)
{
    // returns the final price including tax
    return (cost * (taxRate/100)) + taxRate;
}

int main()
{
    float taxRate = 0;
    float cost = 0;
    // asks for input of tax and cost
    cout << "Enter tax and cost" << endl;
    cin >> taxRate;
    cin >> cost;
    // outputs the answer
    cout << addTax(taxRate, cost) << endl;

    return 0;
}