#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int choice;
    double a, b, c, disc;
    cout << "\nZemlyakov i Funduryan" << endl;
    cout << "Sdelaite vibor. 1 - katet. 2 - quadratic equation: " << endl;
    cin >> choice;
    if (choice == 1) {
        cout << "Vvedite a, b: " << endl;
        cin >> a >> b;
        c = sqrt(pow(a, 2) + pow(b, 2));
        cout << "P = " << a + b + c << endl;
        cout << "S = " << (a * b) / 2;
    }
    if (choice == 2) {
        cout << "Vvedite a, b, c (a != 0 & b * b - 4 * a * c > 0)" << endl;
        cin >> a >> b >> c; 
        disc = sqrt((pow(b, 2) - 4 * a * c));
        cout << "x1 = " << ((-1) * b + disc) / (2 * a)  << "\n" << "x2 = " << ((-1) * b - disc) / (2 * a) << endl;
    }
    main();
}
