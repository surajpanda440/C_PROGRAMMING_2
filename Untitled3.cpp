#include <iostream>

using namespace std;

int main() {

    int year, week, days, temp,a;

    cout << "Enter total number of days : ";
    cin >> a;

    year = a / 365;
    temp = a % 365;
    week = temp / 7;
    days = temp % 7;

    cout << endl << "Years : " << year;
    cout << endl << "Weeks : " << week;
    cout << endl << "Days : " << days;
    cout<<"\n in "<< a <<" days there are "<< year <<" year "<< week<<" week "<<"and "<<  days <<" days";

    return 0;
}
