#include <iostream>


using namespace std;

// used to take the users input
void userInput(double &feet, double &inches)
{
    // enter feet value
    cout << "Enter feet value: " << endl;
    cin >> feet;
    // enter inch value
    cout << "Enter inch value: " << endl;
    cin >> inches;
}

// calculates feet and inches into meters and centimeters
void calculating(double &feet, double &inches , double &meters, double &centimeters)
{
    // conversion math
    meters = (feet * 0.3048) + (inches * 0.0254);
    centimeters = (feet * 30.48) + (inches * 2.54);
}

// outputs the answer
void output(double meters, double centimeters)
{
    cout << "Your converted answer is: " << meters << " meters and " << centimeters << " centimeters." << endl;

}

int main()
{
    // declare the variables
    double feet;
    double inches;
    double meters;
    double centimeters;

    bool isLooping = true;
    string exitInput = "";

    // loop to make the user be able to input until they type exit
    while (isLooping)
    {
        // takes input
        cout << "would you like to exit or continue? (type exit to exit, or continue to continue)" << endl;
        cin >> exitInput;

        // if input is exit, exit, if continue, run the code
        if(exitInput == "exit")
        {
            break;
        }
        else if (exitInput == "continue")
        {
            // run the functions in order
            userInput(feet,inches);
            calculating(feet, inches, meters, centimeters);
            output(meters, centimeters);
        }
        else
        {
            // loop back up
            continue;
        }
    }
}


