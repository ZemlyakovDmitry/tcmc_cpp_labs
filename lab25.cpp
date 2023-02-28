#include <iostream>

using namespace std;

void numbers(int* arr, int x) {
    int i = 4;
    while (x > 0) {
        arr[i--] = x % 10;
        x /= 10;
    }
}

void output(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void add_bonus(int* arr, int size, int bonus) {
    for (int i = 0; i < size; i++) {
        arr[i] += bonus;
    }
}

int main() {
    int n = 15973;
    int numbers1[5];
    numbers(numbers1, n);
    output(numbers1, 5);

    int numbers2[] = {10, 20, 30, 40, 50};
    add_bonus(numbers2, 5, 500);
    output(numbers2, 5);

    return 0;
}
