#include <iostream>

using namespace std;

int main()
{
    string str, res;
    cout << "Zemlyakov" << endl;
    cout << "Vvedite stroku: ";
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' ')
            res += ", ";
        res += str[i];
    }
    cout << res << endl;
    res = "";
    
    
    

    cout << "Vvedite stroku: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '('){
            for(int j = i; str[j] != ')'; j++){
                i++;
            }
            i++;
        }
        else{
            res += str[i];
        }
    }
    
    cout << res;
    return 0;
}
