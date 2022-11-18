#include <iostream>

using namespace std;

int main()
{
    int chislo, x, y, m, n;
    cout << "Zemlyakov i Funduryan" << endl;
    cout << "Vvedite  4-znachnoye chislo: ";
    cin >> chislo;
    if ((999 < chislo && chislo < 10000) && ((chislo / 1000) + (chislo / 100 % 10)) == ((chislo % 100 / 10) + (chislo % 10)))
        cout << "\nTrue" << endl;
    else if (999 < chislo && chislo < 10000)
        cout << "False" << endl;
    else
        cout << "Necorrectny vvod" << endl;

    cout << "Vvedite tochku s koordinatami (x, y):";
    cin >> x >> y;
    cout << "Vvedite m, n (m < n): ";
    cin >> m >> n;
    if (x > m && x < n)
        cout << "\nTrue" << endl;
    else
        cout << "\nFalse" << endl;
    return 0;
}