#define USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, y;
    cout << "Zemlyakov \n";
    cout << "Vvedine x: \n";
    cin >> x;
    cout << "Vvedite y: \n";
    cin >> y;
    cout << "f1 = " << ((sin(x) + cos(y)) / (cos(x) - sin(y))) * tan(x * y);
    cout << "\nf2 = " << (log(fabs((y - sqrt(fabs(x))) * (x - (y / (x + (pow(x, 2) / 4))))))) << "\n";
    system("PAUSE");
}