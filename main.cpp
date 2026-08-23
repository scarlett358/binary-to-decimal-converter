#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    int decimal = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Check whether every character is either 0 or 1
    for (char digit : binary) {
        if (digit != '0' && digit != '1') {
            cout << "Invalid binary number!" << endl;
            return 1;
        }
    }

    // Converts it
    for (char digit : binary) {
        decimal = decimal * 2 + (digit - '0');
    }

    cout << "Decimal: " << decimal << endl;

    return 0;
}
