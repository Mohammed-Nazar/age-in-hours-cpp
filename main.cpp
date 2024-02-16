#include <iostream>

using namespace std;

int main()
{
    /* Q\ Write C++ code to ask the user his age in years and calculate and display the age in hours.
            Note: 1 year = 365 days ; 1 day = 24 hours  */

    int userAge, ageInHour;


    cout << "Please enter Your age in yaers: ";
    cin >> userAge;

    /* Every year has 365 days so first multiply by 365 we get the age in days, every day has 24 hour
        so we multiply the result of the previous multiplication with 24.
     */

     ageInHour = userAge * 365 * 24;

     cout << "Your age in hours is: " << ageInHour << endl;

    return 0;
}
