#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // Using bitwise AND instead of modulo
    if (number & 1) {
        cout << number << " is Odd." << endl;
    } else {
        cout << number << " is Even." << endl;
    }

    return 0;
}
