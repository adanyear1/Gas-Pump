#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int lowgasprice = 2.5,
        midgasprice = 2.7,
        highgasprice = 2.9,
        choice,
        Diesel = 3.5;
    char Octane;    
    float spend;
    float gallon = 3.78541178;
    float nogallons = spend/gallon;  
    
    cout<<"Welcome To El Pariente Gas Station" << endl;
    cout << "Would You Like: " << endl;
    cout << "1. Gasoline " << endl; 
    cout << "2. Diesel " << endl;
    cin >> choice;
    
    if (choice == 1)
    {
        cout << "Choose Octane: " << endl;
        cout << "A. 87 " << endl;
        cout << "B. 89 " << endl;
        cout << "C. 91 " << endl;
        cin >> Octane;
        switch (Octane)
        {
            case 'A':
                    cout << "Total Cost Per Gallon is $";
                    cout << lowgasprice << endl;
                    cout << "How Much Would You Like To Spend on Gasoline Today?" << endl;
                    cout << "$";
                    cin >> spend;
                    cout << "Gallons: " << nogallons << endl;
            break;
            case 'B':
                    cout << "Total Cost Per Gallon is $";
                    cout << midgasprice << endl;
                    cout << "How Much Would You Like To Spend on Gasoline Today?" << endl;
                    cout << "$";
                    cin >> spend;
                    cout << "Gallons: " << nogallons << endl;
            break;
            case 'C':
                    cout << "Total Cost Per Gallon is $";
                    cout << highgasprice << endl;
                    cout << "How Much Would You Like To Spend on Gasoline Today?" << endl;
                    cout << "$";
                    cin >> spend;
                    cout << "Gallons: " << nogallons << endl;
            break;
        }
    }
    else if (choice == 2)
    {
        cout << "How Much Would You Like To Spend on Diesel Today?" << endl;
        cout << "$";
        cin >> spend;
        cout << "Gallons: " << nogallons << endl;
    }
    else
    {
        cout << "Please Enter 1 for Gasoline or 2 for Diesel" << endl;
    }

    return 0;
}