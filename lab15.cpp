#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {
    int num, n, count = 0;
    ofstream f;
    ifstream file;
    cout << "Zemlyakov i Semenov" << endl << "Vvedite kolichestvo deystvitel'nykh chisel N: ";
    cin >> n;
    f.open("f1.txt");
    cout << "Vvedite chisla: " << endl;
    while (count < n) {
        cin >> num;
        f << num << endl;
        ++count;
    }
    f.close();
    cout << "Zapisan fayl f1.txt" << endl;

    file.open("f1.txt");
    num = 0;
    int proiz = 1;
    cout << "Polozhitel'nyye chisla iz fayla:";
    while (file >> num){
        
           if (num > 0) {
            cout << num << endl;
            proiz = proiz * num;
            num = 1;
           }
    }
    cout << endl << "Proizvedeniye chisel iz fayla: " << proiz;
    cout << endl << endl;
    file.close();
    count = 0; 

    cout << "Vvedite kolichestvo deystvitel'nykh chisel N: ";
    cin >> n;
    srand(time(0));
    f.open("f2.txt");
    while(count < n){
        f <<  rand()%(199) + -100 << endl;
        ++count;
    }
    f.close();
    cout << "Zapisan fayl f2.txt" << endl;
    file.open("f2.txt");
    f.open("g.txt");
    while(file >> num){
        if (num % 2 == 0) {
            f << num << endl;
        }
    }
    f.close();
    file.close();
    cout << "Zapisan fayl g.txt";
    system("pause");
}
