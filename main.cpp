#include <iostream>
#include <string>
using namespace std;

void factorialCalculator() {
    int n;
    cout <<"Please Enter a positive integer; ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. Enter a positive integer.\n";
        return;
    }

    int result = 1, i = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << result << endl;
}

void numberPrymaid() {
    int rows;
    cout << "Enter amount of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int space = 0; space < rows - i; space++) {
            cout << " ";
        }
        for (int num = 1; num <= i; num++) {
        cout << num << " ";
        }
        cout << endl;
    }
}

void sumEvenOdd() {
    int choice, n;
    cout << "Choose option:\n1. Total of even numbers\n2. Total of odd numbers\nEnter 1 or 2: ";
    cin >> choice;

    cout << "Enter upper limit: ";
    cin >> n;

    int sum = 0, i = 1;
    do {
        if (choice == 1 && i % 2 == 0) {
            sum += i;
        } else if (choice == 2 && i % 2 != 0) {
            sum += i;
        }
        i++;
    } while (i <= n);

    if (choice == 1)
        cout << "Total of even numbers up to " << n << ": " << sum << endl;
    else
        cout << "Total of odd numbers up to " << n << ": " << sum << endl;
}
void reverseString() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = "";
    int i = input.length() - 1;
    while (i >= 0) {
        reversed += input[i];
        i--;
    }

    cout << "Reversed string: " << reversed << endl;
}

int main() {
    int choice;

    do {
        cout << "\n========= Interactive Math & String Utility Program =========\n";
        cout << "1. Factorial Calculator\n";
        cout << "2. Number Pyramid\n";
        cout << "3. Total of Even or Odd Numbers\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit\n";
        cout << "==============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                factorialCalculator();
                break;
            case 2:
                numberPyramid();
                break;
            case 3:
                sumEvenOdd();
                break;
            case 4:
                reverseString();
                break;
            case 5:
                cout << "Farewell!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}