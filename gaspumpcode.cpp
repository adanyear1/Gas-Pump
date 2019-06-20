#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    char octane;
    const double lowgasprice = 2.50,
              midgasprice = 2.70,
              highgasprice = 2.90,
              Diesel = 3.50;
    float spend,
          nogallons;               
          
    cout << "Welcome To El Pariente Gas Station" << endl;
    cout << "Which Fuel Type Would You Like: " << endl;
    cout << "A. Unleaded Fuel 87" << endl;
    cout << "B. Plus Unleaded Fuel 89" << endl;
    cout << "C. Premium Unleaded Fuel 93" << endl;
    cout << "D. Low Sulfur Diesel" << endl;
    cin >> octane;
    
    switch (octane)
    {
        case 'A':
            cout << "Cost Per Gallon $" << lowgasprice << endl;
            cout << "How Much Would Like to Spend On Fuel?" << endl; 
            cin >> spend;
            cout << "You Spent a total of $" << spend << " On Fuel" << endl;
            nogallons = spend/lowgasprice;
            cout << "Gallons: " << nogallons << endl;
            break;
        case 'B':
            cout << "Cost Per Gallon $" << midgasprice << endl;
            cout << "How Much Would Like to Spend On Fuel?" << endl; 
            cin >> spend;
            cout << "You Spent a total of $" << spend << " On Fuel" << endl;
            nogallons = spend/midgasprice;
            cout << "Gallons: " << nogallons << endl;
            break;
        case 'C':
            cout << "Cost Per Gallon $" << highgasprice << endl;
            cout << "How Much Would Like to Spend On Fuel?" << endl; 
            cin >> spend;
            cout << "You Spent a total of $" << spend << " On Fuel" << endl;
            nogallons = spend/highgasprice;
            cout << "Gallons: " << nogallons << endl;
            //break;
        case 'D':
            cout << "Cost Per Gallon $" << Diesel << endl;
            cout << "How Much Would Like to Spend On Fuel?" << endl; 
            cin >> spend;
            cout << "You Spent a total of $" << spend << " On Fuel" << endl;
            nogallons = spend/Diesel;
            cout << "Gallons: " << nogallons << endl;
            break;
        default: 
            cout << "Invalid Entry " << endl;
    }
    
    cout << "Thank You For Coming To El Pariente Gas Station\n";
    cout << "Come Again" << endl;
    
    return 0;
}
