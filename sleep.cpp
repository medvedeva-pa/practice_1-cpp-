#include "std_lib_facilities.h"
#include "windows.h"

int main()
{
    int n;
    cout << "enter n integer value: ";
    cin >> n;

    while (n >= 1) {
        cout << n << "\n";
        n--;
        Sleep(1000);
    }

    keep_window_open();
}