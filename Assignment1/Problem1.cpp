#include <iostream>

using namespace std;

int main()
{
    //declare constant for how much a ton is in ounces
    const float tonAmount = 35273.92;
    //create variable for inputing ounce
    float inputOunce = 0;

    //input ounce amount
    cout << "Enter your weight in ounces: " << endl;
    cin >> inputOunce;

    //convert ounce to ton
    float ounceConverted = inputOunce/tonAmount;

    //display amount
    cout << "Your weight in metric tons is: " << ounceConverted << endl;

    //convert tons into ounces which shows how many boxes needed
    float cerealBoxes = tonAmount/inputOunce;

    //display amount
    cout << "You will need this many cereal boxes: " << cerealBoxes << endl;

}