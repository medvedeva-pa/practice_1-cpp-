#include "std_lib_facilities.h"

int main()
{
    system("chcp 65001");
    int n = 0;
    cout << "введите количество яблок: ";
    cin >> n;

   if ( n%10==0 or n%10>4 or n%100==0 )
       cout << n << " яблок\n";
   else if ( n%100>10 and n%100<21 )
       cout << n << " яблок\n";
   else if ( n%10==1 )
       cout << n << " яблоко\n";
   else if ( n%10>1 and n%10<5 )
       cout << n << " яблока\n";

    keep_window_open();
}