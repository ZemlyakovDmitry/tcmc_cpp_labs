#include <iostream>

using namespace std;

void reverse(int* arr, int n) {
	int* start = arr;
	int* end = arr + n - 1;
	while (start < end) {
		int temp = *start;
		*start = *end;
		*end = temp;
        	++start;
		--end;
	}
}

void output(int* arr, int n) {
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int addition(int x, int y) {
	return x + y;
}

int subtraction(int x, int y) {
	return x - y;
}

int operation(int x, int y, int (*functocall)(int,int)) {
	return (*functocall)(x, y);
}

int main() {
	const int n = 5;
	int c[n] = { 1,2,3,4,5 };
	reverse(c, n);
	output(c, n);
	cout << operation(7, 5, addition) << endl;
	cout << operation(20, 11, subtraction) << endl;
	return 0;
}
