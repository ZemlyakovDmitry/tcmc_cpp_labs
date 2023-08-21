#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    string surname;
    int age;
public:
    Person(string n, string s, int a){
        name = n;
        surname = s;
        age = a;
    }
    void output(){
        cout << "Меня зовут " << name << " " << surname << ". Мне " << age << " лет." << endl;
    }
};

class Student : public Person {
private:
    string specialty;
public:
    Student(string n, string s, int a, string sp) : Person(n, s, a){ 
        specialty = sp;
    }
    void output(){
        cout << "Меня зовут " << name << " " << surname << ". Я студент специальности \"" << specialty << "\". Мне " << age << " лет." << endl << "Моя будущая специальность: " << specialty << endl;
    }
};


int main()
{
    setlocale(0, "");
    cout << "Земляков Дмитрий" << endl << endl;
    Person p1("Инна", "Язапут", 18);
    p1.output();
    cout << endl;
    Student s1("Эрен", "Йегер", 19, "Обеспечение информационной безопасности автоматизированных систем");
    s1.output();
    return 0;
}