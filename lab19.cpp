#include <iostream>
#include <fstream>

using namespace std;

const int s = 10;
int arr[s];

void createArray()
{
    srand(time(0));
    for (int i = 0; i < s; i++)
        arr[i] = rand() % 100 + 1;
}

void printArray()
{
    for (int i = 0; i < s; i++)
        cout << "A[" << i << "]=" << arr[i] << endl;
}

int sumArray(int a = 0, int b = s)
{
    int sum = 0;
    for (int i = a; i < b; i++)
        sum += arr[i];
    return sum;
}

string pythagoras(string fname = "Novyy tekstovyy dokument.txt")
{
    ofstream out(fname);
    for (int i = 0; i <= 9; i++)
        out << i << '\t';
    out << endl;

    for (int i = 1; i <= 9; i++)
    {
        out << i << '\t';
        for (int j = 1; j <= 9; j++)
            out << i * j << '\t';
        out << endl;
    }
    return fname;
}

int main()
{
    cout << "Zemlyakov" << endl;
    createArray();
    cout << "Odnomernyy massiv iz sluchaynykh chisel: " << endl;
    printArray();
    cout << "Summa vsekh chisel odnomernogo massiva : " << sumArray() << endl;
    cout << "Summa ot 3-go do 7-go elementa massiva : " << sumArray(3, 7) << "\n\n";
    cout << "Zapisan fayl " << pythagoras() << endl;
    cout << "Zapisan fayl " << pythagoras("Pythagoras.txt") << endl;
}
