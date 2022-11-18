#include <iostream>

using namespace std;

int main()
{
    cout << "Zemlyakov" << endl;
    int number, summ = 0;
    cout << "Vvedite chisla cherez Enter (0 - konets vvoda):" << endl;
    do
    {
        cin >> number;
        summ += number;
    } while (number != 0);
    cout << "Summa chisel = " << summ << endl;

    string password = "admin";
    string input;
    int tries = 0;
    cout << endl << "Vvedite vash parol':" << endl;
    while (tries < 3) {
        cin >> input;
        if (input == password) {
            cout << "Dobro pozhalovat'!";
            return 0;
        }
        ++tries;
        cout << "Nekorrectyy prl" << endl;
    }
    cout << "Kolichestvo popytok ischerpano!";
    return 0;
}