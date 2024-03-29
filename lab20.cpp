#include <iostream>
#include <fstream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

void perimeter(float dar){
    cout << "Dlina okruzhnosti: " << 2*M_PI*dar << endl;
}

void perimeter(float a, float b){
    float c = a + b + sqrt(b*b + a*a);
    cout << "Perimetr pryamougol'nogo treugol'nika po dvum katetam: " << c << endl;
}

void fileReader(){
    cout << "Vso soderzhimoye fayla Text.txt:" << endl;
    ifstream file("File.txt");
    while(!file.eof()){
        string s;
        getline(file,s);
        cout << s << endl;
    }
}

void fileReader(int line){
    cout << "Tol'ko " << line << "-ya stroka iz fayla Text.txt:" << endl;
    ifstream file("File.txt");
    string s;
    for(int i = 0; i < (line-1); ++i)
        getline(file, s);

   getline(file,s);
   cout << s << endl; 
}

int main()
{
    cout<<"Zemlyakov" << endl;
    perimeter(5.5);
    perimeter(3, 4);
    cout << endl << endl;
    fileReader();
    fileReader(5);
    return 0;
}
