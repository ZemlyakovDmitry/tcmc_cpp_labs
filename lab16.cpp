#include <iostream>
#include <vector>

using namespace std;

int main(){
	setlocale(LC_ALL,"Russian");
	cout << "Zemlyakov" << endl << endl;
	vector<string> vec;
	vector<string>::iterator iter;
	string a, f, e, num;

	cout << "Исходный вектор V:" << endl;
	while(cin >> a){
		vec.push_back(a);
		char c=cin.get();
		if(c == '\n')
			break;
	}

	cout << "Введите новый элемент F:" << endl;
	cin >> f;

	cout <<  "Введите элемент E:" << endl;
	cin >> e;

	for(iter = vec.begin(); iter < vec.end(); iter++){
		if(*iter == e)
			iter =  vec.insert(++iter, f);
	}

	cout << "Новый вектор:" << endl;
	for(iter = vec.begin(); iter != vec.end(); ++iter){
                cout << *iter << " ";
        }

	vec.clear();
	cout << endl << endl;

	cout << "Исходный вектор V:" << endl;
        while(cin >> a){
                vec.push_back(a);
                char c=cin.get();
                if(c == '\n')
                        break;
        }

	cout << "Введите элемент E:" << endl;
	cin >> e;

	for(iter = vec.begin(); iter < vec.end(); ++iter){
                if(*iter == e)
			iter = vec.erase(iter);
        }

        cout << "Новый вектор:" << endl;
        for(iter = vec.begin(); iter != vec.end(); ++iter){
                cout << *iter << " ";
        }
	cout << endl;
}
