#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string* name;
    string* surname;
    int* age;
public:
    Person(const string& n, const string& s, int a) : name(new string(n)), surname(new string(s)), age(new int(a)) {}

    virtual void output() {
        cout << "Меня зовут " << *name << " " << *surname << ". Мне " << *age << " лет.\n";
    }

    virtual ~Person() {
        delete name;
        delete surname;
        delete age;
    }
};

class Student : public Person {
private:
    string* specialty;
public:
    Student(const string& n, const string& s, const int& a, const string& sp) : Person(n, s, a), specialty(new string(sp)) {}

    virtual void output() override {
        Person::output();
        cout << "Моя будущая специальность: " << *specialty << endl;
    }

    virtual ~Student() {
        delete specialty;
    }
};

int main() {
    Person* p[] = {
        new Person("Иван", "Петров", 18),
        new Student("Мария", "Сидорова", 19, "Обеспечение информационной безопасности автоматизированных систем")
    };

    for (int i = 0; i < 2; i++) {
        p[i]->output();
        cout << endl;
    }

    for (int i = 0; i < 2; i++){
        delete p[i];
    }
    return 0;
}
