#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

void gen_vec(vector<int>& vec){
	for(int i = 0; i < 9; ++i){
		int num = -10 + rand() % 21;
		vec.push_back(num);
	}
}

void print_vec(const vector<int>& vec){
    for(int i = 0; i < 9; ++i)
        cout << vec[i] << " ";
    cout << endl;
}

void swap(vector<int>& v1, vector<int>& v2) {
    vector<int> temp = v1;
    v1 = v2;
    v2 = temp;
}

void minmax(vector<int>& v, int& min, int& max) {
    min = v[0];
    max = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < min)
            min = v[i];
        if(v[i] > max)
            max = v[i];
    }
}

int main() {
    vector<int> v1;
    vector<int> v2;
    srand(time(0));

    cout<<"Zapolnyayem vektory v1, v2 sluchaynymi chislami." << endl << endl;
    gen_vec(v1);
    gen_vec(v2);

    cout << "Vyvod vektora v1: ";
    print_vec(v1);
    cout << "Vyvod vektora v2: ";
    print_vec(v2);

    cout << endl << "Menyayem znacheniya elementov vektorov v1, v2." << endl << endl;
    swap(v1, v2);

    cout << "Vyvod vektora v1: ";
    print_vec(v1);

    cout << "Vyvod vektora v2: ";
    print_vec(v2);
    
    int min, max;
    minmax(v1, min, max);
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    return 0;
}

