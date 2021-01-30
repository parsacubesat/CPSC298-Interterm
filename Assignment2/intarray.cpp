#include <iostream>

using namespace std;

int main()
{
    // create an array of size 10
    int numberArray [10];
    // loop the array so that the user can have an input for each item
    for (int i = 0 ; i < 10 ; ++i)
    {
        cout << "Enter number: " << endl;
        cin >> numberArray[i];
    }
    // loop the array so that is outputs the user's input to the console
    for (int i = 0 ; i < 10 ; ++i)
    {

        cout << numberArray[i];
    }
    // end with a new line
    cout << endl;

    return 0;
}