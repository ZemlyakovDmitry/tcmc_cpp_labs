#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Zemlyakov" << endl;
    cout << "Vvedite 3 deystvitel'nykh chisla:  ";
    int nums[4];

    for (int i = 1; i < 4; i++) {
        cin >> nums[i];
    }

    for (int i = 1; i < 4; ++i) {
        if (nums[i] > -1) {
            cout << pow(nums[i], 2) << " ";
        }
        else
            cout << pow(nums[i], 4) << " ";
    }

    int a, b;
    cout << "\n Vvedite 2 ugla treugol'nika (v gradusakh):  ";
    cin >> a >> b;
    if (a + b > 179) {
        cout << "Treugol'nik ne vozmozhen" << endl;
        return 0;
    }
    cout << "Treugol'nik vozmozhen" << endl;
    if ((a == 90 || b == 90) || (180 - a - b == 90)) {
        cout << "Treugol'nik pryamougol'nyy" << endl;
    }

    return 0;
}