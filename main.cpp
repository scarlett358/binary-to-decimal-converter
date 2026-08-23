#include <iostream>
using namespace std;

int main() 
{
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;

    for (char digit : binary) 
    {
        decimal = decimal * 2 + (digit - '0');
    }

    cout << "Decimal: " << decimal << endl;

    return 0;
}
