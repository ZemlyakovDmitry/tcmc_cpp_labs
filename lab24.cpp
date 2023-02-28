#include <iostream>

using namespace std;


void swap(int* a, int* b, int* c) {
    cout << endl << "Delayem perestanovku a->b->c->a." << endl;
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

void sum(int* arr1, int* arr2, int* arr3, int n) {
    cout << "Skladyvayem elementy massivov m1, m2." << endl;
    for (int i = 0; i < n; i++) {
        *(arr3 + i) = *(arr1 + i) + *(arr2 + i);
    }
}

int main() {
    int a,b,c;
    cout << "Vvedite chisla a, b, c: ";
    cin >> a >> b >> c;
    swap(&a, &b, &c);
    cout << endl << "a, b, c posle perestanovki:" << a << " " << b << " " << c << endl << endl;

    const int n = 5;
    int arr1[n];
    int arr2[n];
    int arr3[n];

    cout << "Vvedite elementy massiva m1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    cout << "Vvedite elementy massiva m2: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    sum(arr1, arr2, arr3, n);
    cout << endl;
    cout << "Vyvod massiva m3: ";
    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}