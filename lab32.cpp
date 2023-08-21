#include <iostream>

using namespace std;

class MyComplex
{
private:
    double *real;
    double *imag;

public:
    MyComplex() // конструктор при вызове без аргументов
    {
        real = new double;
        imag = new double;
    }

    MyComplex(const MyComplex& c) {
        real = new double;
        imag = new double;
        *real = *(c.real);
        *imag = *(c.imag);
    }
    
    MyComplex(double r, double i) // конструктор при вызове с аргументами (2 числа)
    {
        real = new double;
        imag = new double;
        *real = r;
        *imag = i;
    }

    ~MyComplex() // деструктор
    {
        delete real;
        delete imag;
    }

    MyComplex operator+(MyComplex &c) // перегруженный оператор +
    {
        MyComplex res;
        *res.real = *real + *c.real;
        *res.imag = *imag + *c.imag;
        return res;
    }

    MyComplex &operator=(MyComplex &c) // перегруженный оператор присвоения
    {
        real = c.real;
        imag = c.imag;
        return *this;
    }

    friend ostream &operator<<(ostream &out, const MyComplex &c) // перегруженный оператор вывода
    {
        out << "(" << *c.real << ", " << *c.imag << ")";
        return out;
    }
};

int main()
{
    MyComplex c1(1, 2);
    MyComplex c2(3, 4);
    MyComplex c3 = c1 + c2;

    cout << "Zemlaykov" << endl << endl;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c3 = c1 + c2 = " << c3 << endl;

    return 0;
}
