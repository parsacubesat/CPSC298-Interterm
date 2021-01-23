#include <iostream>

using namespace std;

int main()
{
    //declare the variables
    int numCapacity = 0;
    int numPeople = 0;

    // ask for room capacity
    cout << "What is the room's maximum capacity?: " << endl;
    cin >> numCapacity;

    //Ask for number attending
    cout << "How many people will be attending?: " <<endl;
    cin >> numPeople;

    // Check to see if people attending is good for fire safety or not.
    if (numPeople <= numCapacity)
    {
        cout << "It is legal to hold the meeting and you can have " << numCapacity-numPeople << " more people in the room." << endl;
    }
    else if ( numPeople > numCapacity)
    {
        cout << "The meeting cannot be held and " << numPeople-numCapacity << " need to be removed from the room." << endl;
    }
    else
    {
        cout << "Something went wrong" << endl;
    }
    
}