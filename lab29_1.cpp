#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
    string bookTitle;
    string author;
    int year;
    int number;
public:
    void SetData(string title, string authorName, int publishYear, int bookNumber) {
        bookTitle = title;
        author = authorName;
        year = publishYear;
        number = bookNumber;
    }

    void GetData() {
        cout << "Название: " << bookTitle << endl;
        cout << "Автор: " << author << endl;
        cout << "Год публикации: " << year << endl;
        cout << "Номер книги: " << number << endl;
    }

    string GetAuthor() {
        return author;
    }
};

void DisplayBooksByAuthor(vector<Book>& books, string authorName) {
    for (int i = 0; i < books.size(); i++) {
        if (books[i].GetAuthor() == authorName) {
            books[i].GetData();
			cout << endl;
        }
    }
}

int main() {
	setlocale(LC_ALL,"C");
    int numBooks;
    string title, authorName;
    int publishYear, bookNumber;

    cout << "Введите количество книг: ";
    cin >> numBooks;

    vector<Book> books;

    for (int i = 0; i < numBooks; i++) {
        cout << "Название книги: ";
        cin >> title;
        cout << "Автор книги: ";
        cin >> authorName;
        cout << "Год публикации: ";
        cin >> publishYear;
        cout << "Номер книги: ";
        cin >> bookNumber;
		cout << endl << endl;
        Book newBook;
        newBook.SetData(title, authorName, publishYear, bookNumber);
        books.push_back(newBook);
    }

    cout << "Все книги:" << endl;
    for (int i = 0; i < books.size(); i++) {
        books[i].GetData();
		cout << endl;
    }


    cout << "Имя автора для фильтра: ";
    cin >> authorName;

    cout << "Книги с фильтром по автору " << authorName << ":" << endl;
    DisplayBooksByAuthor(books, authorName);

    return 0;
}
