#include <iostream>

using namespace std;

int main()
{
    int numberArray [10];
    for (int i = 0 ; i < 10 ; ++i)
    {
        cout << "Enter number: " << endl;
        cin >> numberArray[i];
    }

    for (int i = 0 ; i < 10 ; ++i)
    {

        cout << numberArray[i];
    }

    cout << endl;
}