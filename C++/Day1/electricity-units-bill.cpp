
#include <iostream>
using namespace std;

int main()
{
    int units, type;
    int rate;
    float bill, surcharge = 0, finalBill;

    cout << "Enter Units Consumed: ";
    cin >> units;

    cout << "Enter Connection Type (1 for Domestic, 2 for Commercial): ";
    cin >> type;

    if (type == 1)
    {
        // Domestic Connection

        if (units <= 100)
        {
            rate = 10;
        }
        else if (units <= 300)
        {
            rate = 15;
        }
        else
        {
            rate = 20;
        }

        bill = units * rate;
    }
    else if (type == 2)
    {
        // Commercial Connection

        if (units <= 200)
        {
            rate = 25;
        }
        else
        {
            rate = 35;
        }

        bill = units * rate;
    }
    else
    {
        cout << "Invalid Connection Type!" << endl;
        return 0;
    }

    // Calculate Surcharge

    if (bill > 5000)
    {
        surcharge = bill * 0.10;
    }

    finalBill = bill + surcharge;

    // Display Result

    cout << "\n----- Electricity Bill -----" << endl;
    cout << "Rate: Rs. " << rate << " per unit" << endl;
    cout << "Bill: Rs. " << bill << endl;
    cout << "Surcharge: Rs. " << surcharge << endl;
    cout << "Final Bill: Rs. " << finalBill << endl;

    return 0;
}
