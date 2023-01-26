#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 10;

void reverse(int (&a)[N]) {
	int start = 0;
	int end = N - 1;
	while (start < end) {
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

void shuffle(int (&a)[N]) {
	srand(time(0));
	for (int i = 0; i < N; i++) {
		int ind = rand() % N;
		int temp = a[i];
		a[i] = a[ind];
		a[ind] = temp;
	}
}

int main() {
	int a[N];
	cout << "Zemlyakov Dmitry 9i-21" << endl << endl;
	cout << "Vvedite znacheniya elementov massiva a[10]: " << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	cout << endl;


	cout << "Delayem revers massiva a[N]." << endl;
	reverse(a);
	cout << "Vyvod massiva a[10]: " << endl;
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl << endl;


	cout << "Sluchaynym obrazom perestavlyayem elementy massiva a[N]." << endl;
	shuffle(a);
	cout << "Vyvod massiva a[10]: " << endl;
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl << endl;

	return 0;
}
