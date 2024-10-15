#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2, sum, sub, div, multi, rem;
    char choice;

    cout << "Enter number 1:" << endl;
    cin >> num1;
    cout << "Enter number 2:" << endl;
    cin >> num2;

    do { 
        cout << "1. Sum" << endl;
        cout << "2. Sub" << endl;
        cout << "3. Div" << endl;
        cout << "4. Multi" << endl;
        cout << "5. Power" << endl;
        cout << "6. Rem" << endl;
        cout << "7. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case '1':
                sum = num1 + num2;
                cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
                break;
            case '2':
                sub = num1 - num2;
                cout << "Subtraction of " << num1 << " and " << num2 << " is " << sub << endl;
                break;
            case '3':
                if (num2 != 0) {  
                    div = num1 / num2;
                    cout << "Division of " << num1 << " and " << num2 << " is " << div << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case '4':
                multi = num1 * num2;
                cout << "Multiplication of " << num1 << " and " << num2 << " is " << multi << endl;
                break;
            case '5':
                cout << "Power of " << num1 << " raised to " << num2 << " is " << pow(num1, num2) << endl;
                break;
            case '6':
                if (num2 != 0) {  
                    rem = num1 % num2;
                    cout << "Remainder of " << num1 << " divided by " << num2 << " is " << rem << endl;
                } else {
                    cout << "Error: Cannot calculate remainder with divisor as zero!" << endl;
                }
                break;
            case '7':
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid. Please enter a number (1-7)" << endl;
                break;
        }
    } while (choice != '7');

    return 0;
}
