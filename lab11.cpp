#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Zemlyakov\n";
    float a, b, h;
    cout<<"Vvedite [a, b] cherez probel: ";
    cin >> a >> b;
    cout << "Vvedite shag h : ";
    cin >> h;
    for (float x = a; x<=b; x = x + h){
	    cout << "x = " << x << "   \t f(x) = " << setprecision(2) << fixed << sin(x) - cos(x) << endl;
    }
    
    cout << "\nTablitsa umnozheniya:" <<endl;
    
    for(int z = 1; z <= 10; ++z){
        for(int v = 1; v <= 10; ++v){
            cout << setfill('0') << setw(2) << z * v << "\t";
        }
        cout << "\n";
    }
    return 0;
}
