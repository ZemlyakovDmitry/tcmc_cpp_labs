#include <iostream>



using namespace std;

int main()
{
    cout << "made by Semenov and Zemlyakov\n" << endl;
    cout << "zadacha 1" << endl;
    int mat[255][255];
    int n;
    cout << "Vvedite poryadok matritsy N (0<N<256): ";
    cin >> n;
    cout << "Poluchennaya matritsa: " << endl;
    if (n <= 255 && 0<n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int s = 0; s < n; s++)
            {
                if (i % 2 == 0)
                {
                    mat[i][s] = s + 1;
                }
                else
                {
                    mat[i][s] = n - s;
                }
                cout << " " << mat[i][s];
            }
            cout << "\t" << endl;
        }
    }
    else
    {
        cout << "nevernie znach" << endl;
    }

    cout << "\nzadacha 2" << endl;
    int mat2[255][255];
    int summ=0, sht = 0;
    cout << "Vvedite poryadok matritsy N: ";
    cin >> n;
    cout << "Vvedennaya matritsa: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Vvedite a[" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat2[i][j] > 0) {
                sht++;
                summ += mat2[i][j];
            }
            cout << mat2[i][j] << "  \t";
        }
        cout << " \t" << endl;
    }
    cout << "Summa polozhitel'nykh elementov matritsy = " << summ << endl;
    cout << "Chislo polozhitel'nykh elementov matritsy = " << sht;

    return 0;
}
