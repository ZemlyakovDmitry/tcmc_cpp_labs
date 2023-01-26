#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	cout << "Zemlyakov" << endl;
	vector<string> vec;
	vector<string>::iterator iter;
	cout << "Iskhodnyy vektor:" << endl;
	string a;
	int state = 0;
	while(cin >> a){
        	vec.push_back(a);
        	char c=cin.get();
        	if(c == '\n'){
                        break;
		}
        }
	vec.push_back(vec[0]);
	vec.erase(vec.begin());
	cout << "Novyy vector" << endl;
        for(iter = vec.begin(); iter != vec.end(); ++iter){
                cout << *iter << " ";
        }
	cout << endl << endl;

	vector<string> v;
	cout << "Iskhodnyy vektor:" << endl;
	while(cin >> a){
                v.push_back(a);
                char c=cin.get();
                if(c == '\n'){
                        break;
                }
        }
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size()-1;++i){
		if(vec[i+1] == vec[i]){
			state += 1;
		}
	}

	if(state > 0){
		cout << "V vektore YEST' khotya by dva odinakovykh elementa" << endl;
	}
	else if(state == 0){
		cout << "V vektore NET ni odnogo odinakovogo elementa" << endl;
	}
}
