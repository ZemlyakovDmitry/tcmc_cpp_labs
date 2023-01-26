#include <iostream>
#include <cstdlib> 

using namespace std;


void input(int (&a)[10]) {
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 11;
	}
}

void sort(int (&a)[10]) {
	for (int i = 0; i < 10-1; i++) {
		for (int j = 0; j < 10-i-1; j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
}

void output(int (&a)[10]) {
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int a[10];
	cout << "Zemlyakov lab 22 9i-21" << endl;
	cout << "Zapolnyayem massiv a[N] sluchaynymi chislami." << endl <<  endl;
	input(a);
	cout << "Vyvod massiva a[10]:" << endl;
	output(a);
	cout << endl << "Delayem sortirovku massiva a[N]." << endl << endl;
	sort(a);
	cout << "Vyvod massiva a[10]:" << endl;
	output(a);
	return 0;
}

