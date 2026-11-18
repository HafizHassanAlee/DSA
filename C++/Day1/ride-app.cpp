
#include <iostream>
using namespace std;

int main()
{
    char vehicle;
    int distance, rushHour;
    int rate;
    float fare, rushCharges = 0, totalFare;

    cout << "Enter vehicle type (B/C/R): ";
    cin >> vehicle;

    cout << "Enter distance in kilometers: ";
    cin >> distance;

    cout << "Is it rush hour? (1 Yes, 0 No): ";
    cin >> rushHour;

    switch (vehicle)
    {
        case 'B':
        case 'b':
            rate = 20;
            break;

        case 'C':
        case 'c':
            rate = 40;
            break;

        case 'R':
        case 'r':
            rate = 30;
            break;

        default:
            cout << "Invalid Vehicle Type";
            return 0;
    }

    fare = distance * rate;

    if (rushHour == 1)
    {
        rushCharges = fare * 0.25;
    }

    totalFare = fare + rushCharges;

    cout << "\nRate per KM = Rs. " << rate;
    cout << "\nBasic Fare = Rs. " << fare;
    cout << "\nRush Charges = Rs. " << rushCharges;
    cout << "\nTotal Fare = Rs. " << totalFare;

    return 0;
}
