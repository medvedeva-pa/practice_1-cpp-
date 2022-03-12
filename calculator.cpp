#include "std_lib_facilities.h"

int main() {

    int n1;
    int n2;
    char operation;
    int result;

    cout << "enter 2 integer numbers and a symbol of operation:\n";
    cin >> n1 >> n2 >> operation;

    switch (operation) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        default:
            cout << "sorry, calculator is unfamiliar with this operation.\n";
            break;
    }

    cout << "result: " << result << "\n";
    keep_window_open();
}

