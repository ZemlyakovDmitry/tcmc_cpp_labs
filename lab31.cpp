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

    string GetSurname() const
    {
        return surname;
    }

    string GetName() const
    {
        return name;
    }

    int GetBirthYear() const
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
    friend void InputAll(Group &group);

    friend ostream &operator<<(ostream &os, const Group &group);
};

void InputAll(Group &group)
{
    cout << "Введите название группы: ";
    cin >> group.nameGr;
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
        group.students.push_back(student);
    }
}

ostream &operator<<(ostream &os, const Group &group)
{
    os << "Название группы: " << group.nameGr << endl;

    int count;
    count = group.students.size();
    for (int i = 0; i < count; i++)
    {
        os << "Студент " << i + 1 << ": ";
        os << group.students[i].GetSurname() << " ";
        os << group.students[i].GetName() << " ";
        os << group.students[i].GetBirthYear() << endl;
    }

    return os;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<Group> group(3);

    for (int i = 0; i < 3; i++)
    {
        cout << "Введите данные для группы " << i + 1 << ":" << endl;
        InputAll(group[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Данные для группы " << i + 1 << ":" << endl;
        cout << group[i];
    }

    return 0;
}
