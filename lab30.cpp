#include <iostream>
#include <vector>

#include <string>

using namespace std;

class Student
{
private:
    string surname;
    string name;
    int birthYear;

public:
    Student(string s, string n, int y)
    {
        surname = s;
        name = n;
        birthYear = y;
    }

    string GetSurname()
    {
        return surname;
    }

    string GetName()
    {
        return name;
    }

    int GetBirthYear()
    {
        return birthYear;
    }
};

class Group
{
private:
    string nameGr;
    vector<Student> students;

public:
    void InputAll()
    {
        cout << "Введите название группы: ";
        cin >> nameGr;
        cout << "Введите число студентов: ";
        int count;
        cin >> count;
        for (int i = 0; i < count; i++)
        {
            string s, n;
            int y;

            cout << "Введите фамилию студента под номером " << i + 1 << ": ";
            cin >> s;
            cout << "Введите имя студента под номером " << i + 1 << ": ";
            cin >> n;
            cout << "Введите год рождения студента под номером " << i + 1 << ": ";
            cin >> y;

            Student student(s, n, y);
            students.push_back(student);
        }
    }

    void OutputAll()
    {
        cout << "Название группы: " << nameGr << endl;

        int count;
        count = students.size();
        for (int i = 0; i < count; i++)
        {
            cout << "Студент " << i + 1 << ": ";
            cout << students[i].GetSurname() << " ";
            cout << students[i].GetName() << " ";
            cout << students[i].GetBirthYear() << endl;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<Group> group(3);

    for (int i = 0; i < 3; i++)
    {
        cout << "Введите данные для группы " << i + 1 << ":" << endl;
        group[i].InputAll();
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Данные для группы " << i + 1 << ":" << endl;
        group[i].OutputAll();
    }

    return 0;
}
